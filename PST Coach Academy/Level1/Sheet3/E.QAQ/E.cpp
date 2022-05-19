/*
 * E.cpp
 *
 *  Created on: Feb 7, 2021
 *      Author: Osama Mahmoud
 */


#include <bits/stdc++.h>

using namespace std;

char str[101];
int main()
{
	int A = 0 , Q = 0 , Ans = 0 , i = 0;

	cin >> str;
	while(str[i] != '\0')
	{
		if(str[i] == 'Q')
		{
			Ans+=A;
			Q++;
		}
		if(str[i] == 'A')
			A+=Q;
		++i;
	}
	cout << Ans << "\n";


	return 0;
}




