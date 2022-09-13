/*
 * M.cpp
 *
 *  Created on: Sep 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int Arr[N];
	for(int i=0; i<N; ++i){
		cin >> Arr[i];
	}

	int Min_Pos = 1 , Max_Pos = 1;
	for(int i=0; i<N; ++i){
		if(Arr[i] < Arr[Min_Pos])
			Min_Pos = i;

		if(Arr[i] > Arr[Max_Pos])
			Max_Pos = i;
	}

	swap(Arr[Min_Pos] , Arr[Max_Pos]);

	for(int i=0; i<N; ++i){
		cout << Arr[i] <<" ";
	}

	return 0;
}




