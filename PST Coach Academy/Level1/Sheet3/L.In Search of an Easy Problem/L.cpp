/*
 * L.cpp
 *
 *  Created on: Feb 10, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int Check_Problem(int arr[] , int size)
{
	int flag = 0;
	for(int i=0; i<size; ++i)
	{
		if(arr[i] == 1)
		{
			flag = 1;
			break;
		}
		else
			flag = 0;
	}
	return flag;
}
int main()
{
	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; ++i)
		cin >> arr[i];

	int flag = Check_Problem(arr  ,  n);

	if(flag == 1)
		cout << "HARD"<<"\n";
	else
		cout <<"EASY"<<"\n";

	return 0;
}




