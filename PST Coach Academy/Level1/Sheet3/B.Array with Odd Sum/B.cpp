/*
 * B.cpp
 *
 *  Created on: Feb 8, 2021
 *      Author: Osama Mahmoud
 */

/*for(int i=0; i<n; ++i)
		{
			if(arr[i]%2 != 0)
				Count++;
		}
		if((n % 2 ==0 && Count == n) || Count == 0 )
			cout << "NO"<<"\n";
		else
			cout << "YES"<<"\n";
			*/
#include <bits/stdc++.h>
using namespace std;

int arr[2000]={0};
int main()
{
	int n , t ,Sum = 0;
	cin >> t;

	for(int i=0; i<t; ++i)
	{
		Sum = 0;
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> arr[i];

		bool Even = 0, Odd = 0;
		for(int i=0; i<n; ++i){
			Sum += arr[i];
			if(arr[i]%2 == 0)
				Even = 1;
			else
				Odd = 1;
		}

		if(Sum%2 != 0){
			cout <<"YES"<<"\n";
		}
		else{
			if(Even&Odd)
				cout <<"YES"<<"\n";
			else
				cout <<"NO"<<"\n";
		}
	}


    return 0;
}




