/*
 * I.cpp
 *
 *  Created on: Feb 8, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	bool Flag1 = 0 , Flag2 = 0;
	cin >> n;

	int a[n] , b[n];

	for(int i=0; i<n; ++i){
		cin >> a[i] >> b[i];
	}

	for(int i=0; i<n; ++i){

		if(a[i] != b[i]){
			Flag1 = 1;
			break;
		}
	}

	if(Flag1){
		cout <<"rated";
	}
	else{
		for(int i=0; i<n-1&&Flag2==0; ++i){
			for(int j=i+1; j<n&&Flag2==0; ++j){
				if(a[i] < a[j]){
					Flag2 = 1;
				}
			}
		}
	}
	if(Flag2){
		cout <<"unrated";
	}
	else if(Flag1 == 0){
		cout <<"maybe";
	}
	return 0;
}




