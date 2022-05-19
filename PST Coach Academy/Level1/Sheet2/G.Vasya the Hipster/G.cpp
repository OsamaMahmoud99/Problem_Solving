/*
 * G.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a , b;
	cin >> a >> b;

	if(a > b)
	{
		cout << b << " "<<((a+b)/2)-b;
	}
	else if(b > a)
	{
		cout << a << " "<<((a+b)/2)-a;
	}
	else
	{
		cout << a << " "<<((a+b)/2)-a;
	}
	return 0;
}




