/*
 * J.cpp
 *
 *  Created on: Mar 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int n , res=0 , i;
	
	cin >> n >> s;
	
	for(i=1; i<=n; ++i)
	{
		if((s[i-1]-'0')%2 == 0)
		{
			res = res + i;
		}
	}
	
	cout << res <<"\n";
	return 0;
}




