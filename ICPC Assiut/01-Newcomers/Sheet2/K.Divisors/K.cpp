/*
 * K.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for(int i=1; i<=N; ++i)
	{
		if(N % i == 0)
			cout << i <<"\n";
	}

	return 0;
}




