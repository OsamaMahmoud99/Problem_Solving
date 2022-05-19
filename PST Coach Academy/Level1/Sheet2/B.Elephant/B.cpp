/*
 * B.cpp
 *
 *  Created on: Jan 31, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int res = N / 5;

	if(N%5 == 0)
		cout << res;
	else
		cout << (res+1);


	return 0;
}





