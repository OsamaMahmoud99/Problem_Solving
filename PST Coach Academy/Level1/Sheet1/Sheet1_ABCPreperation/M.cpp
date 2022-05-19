/*
 * M.cpp
 *
 *  Created on: Jan 26, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A1 , A2 , A3 , A4;
	cin >> A1 >> A2 >> A3 >> A4;

	int res = A1;

	if(res > A2)
		res = A2;
	if(res > A3)
		res = A3;
	if(res > A4)
		res = A4;

	cout << res;

	return 0;
}




