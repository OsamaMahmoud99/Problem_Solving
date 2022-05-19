/*
 * X.cpp
 *
 *  Created on: Mar 18, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T , Rem=0 , Count = 0 , Sum = 0 , Res = 0;
	cin >> T ;

	unsigned long N;
	for(int i=0; i<T; ++i)
	{
		cin >> N;
		Sum=0;
		Count = 0;
		while(N > 0)
		{
			Rem = N % 2;
			N = N / 2;

			if(Rem == 1)
			{
				Res = Rem * pow(2 , Count);
				Count++;
				Sum = Sum + Res;
			}
		}
		cout<< Sum <<"\n";
	}

	return 0;
}




