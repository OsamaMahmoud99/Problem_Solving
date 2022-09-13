/*
 * S.cpp
 *
 *  Created on: Aug 31, 2022
 *      Author: Osama
 */




#include <bits/stdc++.h>
using namespace std;

int arr[100][100];

int main()
{
	int N , M , X;

	cin >> N >> M;

	for(int i=0; i<N; ++i)
	{
		for(int j=0; j<M; ++j)
		{
			cin >> arr[i][j];
		}
	}
	cin >> X;


	int flag = 0;
	for(int i=0; i<N&&flag==0; ++i)
	{
		for(int j=0; j<M&&flag==0; ++j)
		{
			if(X == arr[i][j]){
				flag = 1;
			}
		}
	}

	if (flag == 1)
	{
		cout <<"will not take number";
	}
	else
	{
		cout <<"will take number";
	}

	return 0;
}
