/*
 * X.cpp
 *
 *  Created on: Jan 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int  l1 , r1 , l2 , r2;
	cin >> l1 >> r1 >> l2 >> r2;

	//int  S = 0 , M = 0;
	if(l2 >= l1 && l2 <= r1)
	{
		if(r2 >= r1)
			cout <<l2<<" "<<r1;
		else if(r1 >= r2)
			cout <<l2<<" "<<r2;
	}
	else if(l1 >= l2 && l1 <= r2)
	{
		if(r1 >= r2)
			cout <<l1<<" "<<r2;
		else if(r2 >= r1)
			cout <<l1<<" "<<r1;
	}
	else
		cout << -1;
	return 0;
}




