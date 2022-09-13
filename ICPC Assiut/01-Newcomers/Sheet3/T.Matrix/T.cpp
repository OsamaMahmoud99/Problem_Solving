/*
 * T.cpp
 *
 *  Created on: Sep 11, 2022
 *      Author: Osama
 */

#include <bits/stdc++.h>
using namespace std;


int Arr[100][100];

int main()
{
	int N , sum_main = 0 , sum_sec = 0 ;

	cin >> N;

	for(int i=0; i<N; ++i)
	{
		for(int j=0; j<N; ++j)
		{
			cin >> Arr[i][j];
		}
	}

	for(int i=0; i<N; ++i)
	{
		for(int j=0; j<N; ++j)
		{
			if(i == j){
				sum_main += Arr[i][j];
			}

			if(i == N-1-j){
				sum_sec += Arr[i][j];
			}

		}
	}

	cout << abs(sum_main - sum_sec);
	return 0;
}




