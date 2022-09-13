/*
 * H.cpp
 *
 *  Created on: May 6, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main(){

	int N;
	cin >> N;
	int *P = new int[N];

	for(int i=0; i<N; ++i){
		cin >> P[i];
	}

	for(int i=0; i<N; ++i){
		for(int j=i+1; j<N; ++j){
			if(P[i] > P[j]){
				swap(P[i] , P[j]);
			}
		}
	}

	for(int i=0; i<N; ++i){
		cout << P[i] <<" ";
	}

	return 0;
}




