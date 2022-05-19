/*
 * E.cpp
 *
 *  Created on: Jan 31, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n , p ,q;
	cin >> n;

	int count = 0;

	for(int i=1; i<=n; ++i)
	{
		cin >> p >> q;

		if(q-p >= 2)
			count++;
	}
	cout << count;

	return 0;
}




