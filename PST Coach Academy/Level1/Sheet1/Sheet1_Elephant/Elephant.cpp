/*
 * Elephant.cpp
 *
 *  Created on: Jan 23, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;

	int res = x / 5;

	if( x % 5 == 0)

		cout << res;

	else
		cout << res+1;

	return 0;
}




