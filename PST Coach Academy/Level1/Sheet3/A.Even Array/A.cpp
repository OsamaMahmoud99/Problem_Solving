/*
 * A.cpp
 *
 *  Created on: Feb 6, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t , n , arr[40]={0} , Even = 0 , Odd = 0;
	cin >> t;

	for(int i=0; i<t; ++i)
	{
		cin >> n;
		Even = 0;
		Odd  = 0;

		for(int i=0; i<n; ++i)
			cin >> arr[i];
		for(int i=0; i<n; ++i)
		{
			if((i%2) != (arr[i]%2))
			{
				if(i % 2 == 0)
					Even++;
				else
					Odd++;
			}
		}
		if(Even == Odd)
			cout << Even<<"\n";
		else
			cout << -1 <<"\n";
	}

	return 0;
}



