/*
 * D.cpp
 *
 *  Created on: Apr 27, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main(){

	unsigned int N , i;
	cin >> N;
	int Arr[N];

	for(i=0; i<N; ++i){
		cin >> Arr[i];
	}

	for(i=0; i<N; ++i){
		if(Arr[i] <= 10){
			cout << "A[" << i <<"] = "<< Arr[i] <<"\n";
		}
	}

	return 0;
}




