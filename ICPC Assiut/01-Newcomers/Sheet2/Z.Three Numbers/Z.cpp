/*
 * Z.cpp
 *
 *  Created on: Mar 18, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int K , S , Count = 0;
	cin >> K >> S;

	for(int i=0; i<=K; ++i)
	{
		for(int j=0; j<=K; ++j)
		{
			if(S-i-j >= 0 && S-i-j <= K)
				Count++;
		}
	}
	cout << Count;

	return 0;
}




