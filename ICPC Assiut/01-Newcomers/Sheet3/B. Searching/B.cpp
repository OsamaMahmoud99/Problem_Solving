/*
 * B.cpp
 *
 *  Created on: Apr 24, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
	int N , X , i;
	bool flag = 0;
	cin >> N;
	int Arr[N];

	for(i=0; i<N; ++i){
		cin >> Arr[i];
	}
	cin >> X;

	for(i=0; i<N; ++i){
		if(Arr[i] == X){
			flag = 1;
			break;
		}
	}

	if(flag == 1){
		cout << i <<"\n";
	}
	else{
		cout << -1 <<"\n";
	}

	return 0;
}


