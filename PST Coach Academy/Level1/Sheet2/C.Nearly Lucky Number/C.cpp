/*
 * C.cpp
 *
 *  Created on: Jan 31, 2021
 *      Author: asss5
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long  N;
	cin >> N;

	int Count = 0;

	for(int i=1; i<=18; ++i)
	{

	    if( ((N%10) == 4) || ((N%10) == 7) )
		{
			Count++;
		}
		N/=10;
		if(N == 0)
			 break;
	}

	if(Count  == 7 || Count == 4)
		cout <<"YES"<<"\n";
	else
		cout <<"NO"<<"\n";


	return 0;
}


