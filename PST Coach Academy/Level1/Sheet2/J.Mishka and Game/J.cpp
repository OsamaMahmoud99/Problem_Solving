/*
 * J.cpp
 *
 *  Created on: Feb 2, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n , a , b , Mishka = 0 , Chris = 0;
	cin >> n;

	for(int i=1; i<=n; ++i)
	{
		cin >> a >> b;
		if(a > b)
			Mishka++;
		else if(b > a)
			Chris++;
	}
	if(Mishka > Chris)
		cout <<"Mishka"<<"\n";
	else if(Chris > Mishka)
		cout <<"Chris"<<"\n";
	else
		cout <<"Friendship is magic!^^"<<"\n";

	return 0;
}




