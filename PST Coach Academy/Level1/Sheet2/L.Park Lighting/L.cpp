/*
 * L.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t , n , m;
	cin >> t;

	for(int i=1; i<=t; ++i)
	{
		cin >> n >> m;

		if(n == m )
			if(((n*m)%2) !=0)
				cout <<((n*m)/2)+1 <<"\n";
			else
				cout <<((n*m)/2)<<"\n";
		else
			if(((n*m)%2) !=0)
				cout <<((n*m)/2)+1 <<"\n";
			else
				cout <<((n*m)/2)<<"\n";
	}

	return 0;
}




