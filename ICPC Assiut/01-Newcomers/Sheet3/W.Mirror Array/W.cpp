/*
 * W.cpp
 *
 *  Created on: Sep 13, 2022
 *      Author: Osama
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N , M;

	cin >> N >> M;

	long long Arr[N][M];

	for(int i=0; i<N; ++i)
	{
		for(int j=0; j<M; ++j)
		{
			cin >> Arr[i][j];
		}
	}

	for(int i=0; i<N; ++i)
	{
		for(int j=M-1; j>=0; --j)
		{
			cout << Arr[i][j] <<" ";
		}
		cout <<"\n";
	}
	return 0;
}




