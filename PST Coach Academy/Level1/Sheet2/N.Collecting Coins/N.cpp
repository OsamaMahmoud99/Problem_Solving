/*
 * N.cpp
 *
 *  Created on: Feb 2, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t , a , b , c , n;
	cin >> t;

	for(int i=1; i<=t; ++i)
	{
		cin >> a >> b >> c >> n;
        long int  Sum = a+b+c+n;
		if((Sum) % 3 == 0 && a<=Sum/3 && b<=Sum/3 && c<=Sum/3)
			cout << "YES"<<"\n";
		else
			cout << "NO"<<"\n";
	}

	return 0;
}




