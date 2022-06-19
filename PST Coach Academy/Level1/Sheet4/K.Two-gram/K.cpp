/*
 * K.cpp
 *
 *  Created on: Mar 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int Max=0 , i , j , Res=0 , n;
	char c1 , c2;
	
	cin >> n >> s;
	
	for(i=0; i<n-1;++i)
	{
		Res = 0;
		for(j=0; j<n-1; ++j)
		{
			if(s[i]==s[j] && s[i+1]==s[j+1])
			{
				Res++;
			}
		}
		if(Res>Max)
		{
			Max = Res;
			c1 = s[i];
			c2 = s[i+1];
		}
	}
	cout << c1 << c2;

	return 0;
}



