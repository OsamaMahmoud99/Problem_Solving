/*
 * A.cpp
 *
 *  Created on: Mar 28, 2021
 *      Author: Osama Mahmoud
 */

// https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long n , m , a;
	cin >> n >> m >> a;

	unsigned long long res = ((n+a-1)/a) * ((m+a-1)/a);

	cout << res <<"\n";

	return 0;
}




