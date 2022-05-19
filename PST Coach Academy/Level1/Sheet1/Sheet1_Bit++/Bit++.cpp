/*
 * Bit++.cpp
 *
 *  Created on: Jan 23, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string x;
	int n , Bit = 0;
	cin >> n;

	for(int i=0; i<n; i++)
	{
		cin >> x;

		if(x[1] == '+')
			Bit++;
		else
			--Bit;
	}
	cout << Bit <<"\n";

	return 0;
}




