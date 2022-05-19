/*
 * F.cpp
 *
 *  Created on: Feb 7, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int arr[100];

int main()
{
	int n , k , Digit = 0 , Count = 0 , Ans = 0;
	cin >> n >> k;

	for(int i=0; i<n; ++i)
		cin >> arr[i];

	for(int i=0; i<n; ++i)
	{
		Count = 0;

		while(arr[i] > 0)
		{
			Digit = arr[i]%10;
			if(Digit == 7 || Digit == 4)
				Count++;
			arr[i]/=10;
		}
		if(Count <= k)
			Ans++;

	}
	cout << Ans <<"\n";


	return 0;
}




