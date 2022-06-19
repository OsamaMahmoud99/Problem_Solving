/*
 * E.cpp
 *
 *  Created on: Mar 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	string S;

	for(int i=0; i<N; ++i){
		cin >> S;

		if(S.size() <= 10){
			cout << S << "\n";
		}
		else{
			cout << S[0] << (S.size())-2 << S[S.size() - 1]<<"\n";
		}
	}
	return 0;
}




