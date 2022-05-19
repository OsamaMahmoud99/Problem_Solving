/*
 * Q.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T , N , digit;
	cin >> T;

	for(int i=0; i<T; ++i)
	{
		cin >> N;
		int Num = N;
		while(Num > 0)
		{
			digit = Num % 10;
			Num = Num / 10;
			cout << digit <<" ";
		}
		if(N == 0)
			cout << N;
		cout << "\n";
	}
	return 0;
}


