/*
 * Y.cpp
 *
 *  Created on: Aug 31, 2022
 *      Author: Osama
 */


#include <bits/stdc++.h>
using namespace std;

const int size = 1e5+10;
long long arr[size];

int main()
{
	int N , Q , L , R;

	cin >> N >> Q;

	for(int i=1; i<=N; ++i)
	{
		cin >> arr[i];
	}

	for(int i=2; i<=N; ++i)
	{
		arr[i] += arr[i-1];
	}

	for(int i=1; i<=Q; ++i)
	{
		cin >> L >> R;

		cout << arr[R] - arr[L-1] <<"\n";
	}
	return 0;
}




