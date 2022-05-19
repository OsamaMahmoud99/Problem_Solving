/*
 * P.cpp
 *
 *  Created on: Jan 27, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int X;
	cin >> X;

	X /= 1000;

	if(X % 2 == 0)
		cout << "EVEN";
	else
		cout << "ODD";

	return 0;
}




