/*
 * T.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N ,Star = 1;
	cin >> N;
	int Space = N-1;

	for(int i=0; i<N; ++i)
	{

		for(int i=Space; i>0;i--)
		{
			cout<<" ";
		}
		Space--;
		for(int i=0; i<Star; ++i)
		{
			cout << "*";
		}
		Star+=2;
		cout<<"\n";

	}
	return 0;
}



