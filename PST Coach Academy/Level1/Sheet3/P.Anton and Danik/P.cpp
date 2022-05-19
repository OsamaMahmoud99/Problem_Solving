/*
 * P.cpp
 *
 *  Created on: Feb 11, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n , Anton = 0 , Danik = 0;
	cin >> n;
	char arr[n];

	cin>>arr;

	for(int i=0; i<n; ++i)
	{
		if(arr[i] == 'A')
			Anton++;
		else
			Danik++;

	}
	if(Anton > Danik)
		cout <<"Anton"<<"\n";
	else if(Danik > Anton)
		cout <<"Danik"<<"\n";
	else
		cout <<"Friendship"<<"\n";
	return 0;
}




