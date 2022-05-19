/*
 * G.cpp
 *
 *  Created on: Feb 7, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;


int  a[100000+10]={0};

int main()
{
	int n , m , P;
	cin >> n >> m;

	for(int i=0; i<m; ++i)
	{
		cin >> P;
		for(int j=P; j<=n; ++j)
		{
			if(a[j] == 0)
				a[j] = P;
		}
	}

	for(int i=1; i<=n; ++i)
		cout <<a[i]<<" ";


	return 0;
}




