/*
 * N.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	char S;
	int N , X;
	cin >> S;
	cin >> N;

	for(int i=1; i<=N; ++i)
	{
		cin >> X;
		for(int j=0; j<X; ++j)
		{
			cout << S;
		}
		cout <<"\n";
	}
	return 0;
}


