/*
 * R.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N , M;
	long Sum = 0;
	while(1)
	{
		cin >> N >> M;
		Sum = 0;
		if(N > M)
			swap(N , M);
		if(N <= 0 || M <= 0)
			return 0;

		for(int i=N; i<=M; ++i)
		{
			Sum+=i;
			cout << i <<" ";
		}
		cout << "sum ="<<Sum<<"\n";
	}
	return 0;
}


