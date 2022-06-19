/*
 * G.cpp
 *
 *  Created on: Mar 29, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

void SORT(int a[] , int size)
{
	for(int i=0; i<size; ++i)
	{
		for(int j=i+1; j<size; ++j)
		{
			if(a[i] > a[j])
				swap(a[i] , a[j]);
		}
	}
}
int main()
{
	string S;
	cin >> S;
	int Len = S.size();
	int j = 0 , arr[100];

	for(int i=0; i<Len; i+=2){
		arr[j] = S[i]- '0';
		j++;
	}

    SORT(arr , j);

	for(int i=0; i<j; ++i){
		cout << arr[i];
		if(i < j-1){
			cout << '+';
		}
	}

	return 0;
}




