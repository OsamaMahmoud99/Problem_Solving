/*
 * O.cpp
 *
 *  Created on: Mar 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;
	int Mind = 0;

	for(int i=0; i<4; ++i){
		if(S[i] == '+'){
			Mind++;
		}
		else{
			Mind--;
		}
	}
	cout << Mind <<"\n";

	return 0;
}




