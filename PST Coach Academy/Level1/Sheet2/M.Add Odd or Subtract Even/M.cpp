/*
 * M.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t , a , b , Count = 0;
	cin >> t;

	for(int i=1; i<=t; ++i)
	{
		cin >> a >> b;
        Count = 0;
		while(a != b)
		{
			if(a < b)
			{
				if((b-a)%2 != 0)
				{
					Count ++;
					a = a + (b-a);
				}
				else
				{
					Count++;
					a = a + (b-a -1);
				}
			}
			else if(a > b)
			{
				if((a-b)%2 == 0)
				{
					Count++;
					a = a - (a-b);
				}
				else
				{
					Count++;
					a = a - (a-b+1);
				}
			}
			else
				Count = 0;
		}
		cout << Count <<"\n";
	}
	return 0;
}




