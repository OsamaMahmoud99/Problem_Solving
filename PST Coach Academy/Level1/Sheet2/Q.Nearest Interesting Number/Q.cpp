/*
 * Q.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	cin>> a;
	int sum , Val , n;

	for(n=a; n<=1003; ++n)
	{
		sum = 0;
		Val = n;
		while(Val > 0)
		{
			int digit = Val%10;
		    sum = sum + digit;
			Val = Val/10;
		}
		if(sum % 4 == 0)
			break;
	}
	cout << n;

	return 0;
}



