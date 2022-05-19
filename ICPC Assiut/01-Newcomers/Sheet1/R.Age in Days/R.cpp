/*
 * R.cpp
 *
 *  Created on: Jan 27, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long N;
	cin >> N;

	long long months = (N -(N/365)*365)/30;
	long long Days = (N - (N/365)*365 - months*30);

	if(N >= 365)
	{
		cout << N/365 << " years"<<"\n";
		if( (N - 365) >= 30 )
		{
			cout << months << " months"<<"\n";
			cout << Days << " days"<<"\n";
		}
		else
		{
			cout << 0 << " months"<<"\n";
			cout << N-365 << " days"<<"\n";
		}
	}
	else
	{
		cout << N/365 << " years"<<"\n";
		cout << months << " months"<<"\n";
		cout << Days << " days"<<"\n";

	}

	return 0;
}




