/*
 * S.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k , n , w , Sum = 0;
	cin >> k >> n >> w;

	for(int i=1; i<=w; ++i)
	{
		Sum = Sum + (k*i);
	}
	if(Sum > n)
		cout << (Sum-n);
	else
		cout << 0;


	return 0;
}




