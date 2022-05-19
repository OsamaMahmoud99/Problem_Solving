/*
 * W.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int Space = N - 1;
	int Star = 1;
	for(int i=0; i<N; ++i)
	{
		for(int j = Space; j>0; --j)
		{
			cout << " ";
		}
		Space--;
		for(int i = 0; i<Star; ++i)
		{
			cout << "*";
		}
		Star+=2;
		cout<<"\n";

	}
	Star-=2;
	Space = 0;
	for(int i=0; i<N; ++i)
	{
		for(int j = 0; j<Space; ++j)
		{
			cout << " ";
		}
		Space++;
		for(int i = 0; i<Star; ++i)
		{
			cout << "*";
		}
		Star-=2;
		cout<<"\n";

	}

	return 0;
}




