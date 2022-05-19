/*
 * U.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N , A ,B , Sum1 = 0 , Sum2 = 0 , Digit;
	cin >> N >> A >> B;

	int Num;
	for(int i=1; i<=N; ++i)
	{
	    Num = i;
        Sum1 = 0;
		while(Num > 0)
		{
			Digit = Num % 10;
			Sum1 = Sum1 + Digit;
			Num = Num / 10;
		}
		if(Sum1 >=A && Sum1 <= B)
		{
			Sum2 = Sum2 + i;
		}

	}
	cout << Sum2 <<"\n";

	return 0;
}

