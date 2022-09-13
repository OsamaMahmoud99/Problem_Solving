/*
 * P.cpp
 *
 *  Created on: Sep 29, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N , Count = 0 , Op_Count = 0;

	cin >> N;
	int Arr[N];

	for(int i=0; i<N; ++i){
		cin >> Arr[i];
	}


	for(int i=0; i<N; ++i){

		if(Arr[i]%2 == 0){
			Count++;
		}
	}

	if(Count == N){
		int i = 0;
		Count = 0;
		while(Arr[i]%2 == 0){
			Arr[i] /= 2;
			i++;
			Count++;
			if(i == N){
				i = 0;
				if(Count == N){
					Op_Count++;
				}
				Count = 0;
			}
		}
		cout << Op_Count <<"\n";
	}
	else{
		cout << 0 <<"\n";
	}


	return 0;
}




