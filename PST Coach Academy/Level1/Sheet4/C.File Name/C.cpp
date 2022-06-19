/*
 * C.cpp
 *
 *  Created on: Mar 29, 2021
 *      Author: Osama Mahmoud
 */

//https://codeforces.com/contest/978/problem/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	string S;
	cin >> N >> S;

	int Count = 0;

	for(int i=0; i<N-2; ++i){
		if(S[i] == 'x' && S[i+1] == 'x' && S[i+2] == 'x'){

			Count++;
		}
	}
	cout << Count;
	return 0;
}



