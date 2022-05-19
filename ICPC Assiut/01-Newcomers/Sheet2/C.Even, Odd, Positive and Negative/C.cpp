/*
 * C.cpp
 *
 *  Created on: Feb 10, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N , X , Even = 0 , Odd = 0 , Positive = 0 , Negative = 0;
	cin >> N;

	for(int i=0; i<N; ++i)
	{
		cin >> X;

		if(X % 2 == 0 && X < 0)
		{
			Even++;
			Negative++;
		}
		else if(X % 2 !=0 && X > 0)
		{
			Odd++;
			Positive++;
		}
		else if(X % 2 == 0 && X > 0)
		{
			Even++;
			Positive++;
		}
		else if(X % 2 != 0 && X < 0 )
		{
			Odd++;
			Negative++;
		}
		else
			Even++;
	}
	cout << "Even: "<<Even<<"\n"<<"Odd: "<<Odd<<"\n"<<"Positive: "<<Positive<<"\n"<<"Negative: "<<Negative<<"\n";

	return 0;
}




