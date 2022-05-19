/*
 * E.cpp
 *
 *  Created on: Feb 10, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N , X , Max = 0;

	cin >> N;

	for(int i=0; i<N; ++i)
	{
		cin >> X;
		if(X > Max)
			Max = X;
	}
	cout << Max <<"\n";

	return 0;
}



