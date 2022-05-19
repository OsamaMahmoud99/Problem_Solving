/*
 * P.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n , Sum = 0 , i , Res = 0;
	cin >> n;

	for(i=1; i<=n; ++i)
	{
		Sum+=i;
        Res+=Sum;
		if((Res) > n)
			break;
	}
	cout << i-1;

	return 0;
}




