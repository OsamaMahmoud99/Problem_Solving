/*
 * R.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int q , Count = 0;
	unsigned long long n;
	cin >> q;

	for(int i=1; i<=q; ++i)
	{
		cin >> n;
        Count = 0;
		while(n>1)
		{
			if(n%2 == 0)
			{
				n = n/2;
				Count++;
			}
			else if(n%3 == 0)
			{
				n = 2*n/3;
				Count++;
			}
			else if(n%5 == 0)
			{
				n = 4*n/5;
				Count++;
			}
			else
			{
				Count = -1;
				break;
			}

		}
		cout <<Count<<"\n";
	}

	return 0;
}




