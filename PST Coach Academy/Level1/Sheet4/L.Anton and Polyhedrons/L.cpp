/*
 * L.cpp
 *
 *  Created on: Mar 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	string S;
	cin >> N;
	int Face[N] = {0};
    unsigned long long Sum = 0;

	for(int i=0; i<N; ++i){
		cin >> S;

		if(S[0] == 'T'){
			Face[i] = 4;
		}
		else if(S[0] == 'C'){
			Face[i] = 6;
		}
		else if(S[0] == 'O'){
			Face[i] = 8;
		}
		else if(S[0] == 'D'){
			Face[i] = 12;
		}
		else{
			Face[i] = 20;
		}
		Sum+=Face[i];
	}

	cout << Sum <<"\n";

	return 0;
}




