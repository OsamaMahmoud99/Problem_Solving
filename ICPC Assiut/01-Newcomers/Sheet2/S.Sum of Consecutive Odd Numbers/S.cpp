/*
 * S.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T , X ,Y;
	long Sum = 0;
	cin >> T;

	for(int i=0; i<T; ++i)
	{
		Sum = 0;
		cin >> X >> Y;
		if(X > Y)
			swap(X , Y);

		for(int i=X+1; i<Y; ++i)
		{
			if(i % 2 != 0)
				Sum+=i;
		}
		cout << Sum <<"\n";
	}


	return 0;
}



