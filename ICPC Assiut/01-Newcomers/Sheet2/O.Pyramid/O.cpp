/*
 * O.cpp
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

	for(int i=0; i<N; ++i)
	{
		for(int j=0; j<N; ++j)
		{
			if(j <= i)
				cout <<"*";
		}
		cout <<"\n";

	}
	return 0;
}



