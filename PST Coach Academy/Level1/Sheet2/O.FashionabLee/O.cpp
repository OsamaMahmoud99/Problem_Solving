/*
 * O.cpp
 *
 *  Created on: Feb 2, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t , n;
	cin >> t;

	for(int i=1; i<=t; ++i)
	{
		cin >> n;

		if(n%4 == 0)
			cout <<"YES";
		else
			cout <<"NO";
		cout <<"\n";
	}

	return 0;
}





