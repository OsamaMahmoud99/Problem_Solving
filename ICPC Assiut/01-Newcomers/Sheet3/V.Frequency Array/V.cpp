/*
 * V.cpp
 *
 *  Created on: Oct 6, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N , M;

	cin >> N >> M;
	int Arr[N] , Freq[M+1]={0};

	for(int i=0; i<N; ++i){
		cin >> Arr[i];
		Freq[Arr[i]]++;
	}

	for(int i=1; i<=M; ++i){
		cout << Freq[i] <<"\n";
	}
}






