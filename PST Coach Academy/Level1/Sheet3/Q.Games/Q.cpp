/*
 * Q.cpp
 *
 *  Created on: Feb 11, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n , Count = 0;
	cin >> n;
	int h[n] , a[n];

	for(int i=0; i<n; ++i)
		cin >> h[i] >> a[i];

	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			if(i != j)
			{
				if(h[i] == a[j])
					Count++;
			}
		}
	}
	cout << Count <<"\n";
	return 0;
}




