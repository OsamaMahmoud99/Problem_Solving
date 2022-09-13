/*
 * F.cpp
 *
 *  Created on: Apr 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main(){

	unsigned int N , i;
	cin >> N;
	int Arr[N] , Temp;

	for(i=0; i<N; ++i){
		cin >> Arr[i];
	}
    /* Algorithm to reverse Array */
	for(i=0; i<N/2; ++i){
		Temp = Arr[i];
		Arr[i] = Arr[N-i-1];
		Arr[N-i-1] = Temp;
	}
    /* print After reversing */
	for(i=0; i<N; ++i){
		cout << Arr[i] <<" ";
	}

	return 0;
}




