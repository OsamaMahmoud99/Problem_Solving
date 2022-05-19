/*
 * J.cpp
 *
 *  Created on: Jan 26, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long A , B;
	cin >> A >> B;

	if(A % B == 0 || B % A == 0)
		cout << "Multiples";
	else
		cout << "No Multiples";
	return 0;
}




