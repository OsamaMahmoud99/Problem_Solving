/*
 * A.cpp
 *
 *  Created on: Apr 24, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main(){

	int N;
    long long Sum = 0;
	cin >> N;
    long long Arr[N];
	for(int i=0; i<N; ++i){
		cin >> Arr[i];
	}

	for(int i=0; i<N; ++i){
		Sum += Arr[i];
	}

	cout << abs(Sum) <<"\n";

	return 0;
}




