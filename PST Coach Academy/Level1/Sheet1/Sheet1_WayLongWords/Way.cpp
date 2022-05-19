/*
 * Way.cpp
 *
 *  Created on: Jan 23, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;


	for(int i=0; i<n; i++)
	{
		 string str;
		 cin >> str;

		 if(str.size() <= 10)
			 cout << str <<"\n";
		 else
			 cout << str[0] << str.size()-2 << str[str.size() - 1] << "\n";
	}

	return 0;
}




