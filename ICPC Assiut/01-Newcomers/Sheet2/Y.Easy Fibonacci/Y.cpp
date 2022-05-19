/*
 * Y.cpp
 *
 *  Created on: Mar 18, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int arr[N]={0,1};

	for(int i=0; i<N; ++i)
	{
		arr[i+2] = arr[i+1]+arr[i];
	}

	for(int i=0; i<N; ++i)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}




