/*
 * Q.cpp
 *
 *  Created on: Aug 31, 2022
 *      Author: Osama
 */

#include <bits/stdc++.h>
using namespace std;

int arr[100];
int main()
{
	int t , n , c = 0;

	cin >> t;

	while(t--)
	{
		c = 0;
		cin >> n;

		for(int i=0; i<n; ++i)
		{
			cin >> arr[i];
		}

		for(int i = 0; i<n; ++i)
		{
			c++;
			for(int j=i+1; j<n; ++j)
			{
				if(arr[j] >= arr[j-1]){
					c++;
				}
				else{
					break;
				}
			}
		}
		cout << c << "\n";
	}

	return 0;
}




