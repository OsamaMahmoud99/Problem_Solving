/*
 * Theatre.cpp
 *
 *  Created on: Jan 23, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long  m , n ,a;
	unsigned long long res;

	cin >> n >> m >> a;


    res = ((n+a-1)/a)*((m+a-1)/a);

	cout << res <<"\n";


	return 0;
}




