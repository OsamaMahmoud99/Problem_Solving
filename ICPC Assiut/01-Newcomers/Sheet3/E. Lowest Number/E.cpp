/*
 * E.cpp
 *
 *  Created on: Apr 27, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main(){

	unsigned int N , i;
	int Min = 1e9 , Position;
	cin >> N;
	int Arr[N];

	for(i=0; i<N; ++i){
		cin >> Arr[i];
	}

	for(i=0; i<N; ++i){
		if(Arr[i] < Min){
			Min = Arr[i];
			Position = i + 1;
		}
	}
	cout << Min <<" "<< Position <<"\n";

	return 0;
}




