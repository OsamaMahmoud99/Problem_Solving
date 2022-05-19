/*
 * B.cpp
 *
 *  Created on: Feb 6, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t , n , arr[2000]={0} , Sum = 0 , flag = 0;
	cin >> t;

	for(int i=1; i<=t; ++i)
	{
		cin >> n;
		Sum = 0;
		for(int i=0; i<n; ++i)
			cin >> arr[i];
		for(int j=0; j<n; ++j)
			Sum+=arr[j];
		if(Sum % 2 != 0 )
			cout << "YES"<<"\n";
		else
		{
			Sum = 0;
			for(int j=1; j<=n; ++j)
			{
				Sum+=arr[j]+i;
				if(Sum % 2 != 0 )
				{
					cout << "YES"<<"\n";
					break;
				}
				else
					flag = 1;
			}

		}
		if(flag == 1)
			cout << "NO"<<"\n";

	}
	return 0;
}


// 1052 445 683 995 722 1012 1263  = 6172 even   yes
// 1972 74 1009 1887 169 119 462   = 5692 even   no

