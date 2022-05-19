/*
 * A.cpp
 *
 *  Created on: Jan 31, 2021
 *      Author: Osama Mahmoud99
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n , k;
	cin >> n >> k;

	for(int i=0; i<k; i++)
	{
		if(n%10 != 0)
			n--;
		else if(n%10 == 0)
			n/=10;
	}
	cout << n << "\n";

	return 0;
}




