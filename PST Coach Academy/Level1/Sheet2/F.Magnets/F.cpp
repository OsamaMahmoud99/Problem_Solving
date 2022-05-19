/*
 * F.cpp
 *
 *  Created on: Jan 31, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n , x ,  y = 0 , Count = 0;
	cin >> n;


	for(int i=1; i<=n; ++i)
	{
		cin >> x ;

		if(x != y)
			Count++;
		y = x;
	}
	cout << Count;
	return 0;
}




