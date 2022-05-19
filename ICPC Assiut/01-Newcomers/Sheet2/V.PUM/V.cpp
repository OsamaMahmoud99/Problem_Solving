/*
 * V.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N , Count = 1;
	cin >> N;

	for(int i=1; i<=N; ++i)
	{
		for(int j=Count; j<=Count+2; ++j)
		{
			cout << j << " ";
		}
		cout << "PUM"<<"\n";
		Count+=4;
	}
	return 0;
}

