/*
 * G.cpp
 *
 *  Created on: Apr 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

const int size = 1e5+10;
int Arr[size];
int main(){

	int N , flag = 0;

	cin >> N;

	int i = 0 , j = N-1;

	for(int i=0; i<N; ++i)
	{
		cin >> Arr[i];
	}

	while(i < j)
	{
		if(Arr[i] != Arr[j]){
			flag = 1;
			break;
		}

		i++;
		j--;
	}

	if(flag == 0){
		cout << "YES";
	}
	else{
		cout <<"NO";
	}
	return 0;
}


