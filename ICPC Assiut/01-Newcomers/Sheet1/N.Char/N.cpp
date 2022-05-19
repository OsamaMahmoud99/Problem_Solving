/*
 * N.cpp
 *
 *  Created on: Jan 27, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	char X;
	cin >> X;

	if(X >= 'a' && X <='z')
		cout << (char)(X - 32);
	else if(X >= 'A' && X <= 'Z')
		cout << (char)(X + 32);

	return 0;
}




