/*
 * J.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N , flag = 0 , i , j;
	cin >> N;

	for(i=2; i<=N; ++i)
	{
		flag = 0;
		for( j=2; j<=i/2; ++j)
		{
			if(i % j == 0)
			{
				flag = 1;
				break;
			}

		}
		if(flag == 0)
			cout << i << " ";
	}
	return 0;
}


