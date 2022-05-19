/*
 * H.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n , k , Sum = 0 ,Res = 0 , flag = 0 , i;
	cin >> n >> k;

	for(i=1; i<=n; ++i)
	{
		Sum=5*i;
		Res+=Sum;

		if(k > 240-Res)
		{
			flag = 1;
			break;
		}

	}

	if(flag == 1)
		cout <<i-1;
	else
		cout <<n;
	return 0;
}




