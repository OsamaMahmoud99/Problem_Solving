/*
 * O.cpp
 *
 *  Created on: Sep 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int N;
	cin >> N;

	ll Arr[60]={0,1};

	for(int i=2; i<=N; ++i){
		Arr[i] = Arr[i-1]+Arr[i-2];
	}

	if(N==1)
		cout << Arr[0];
	if(N==2)
		cout << Arr[1];
	if(N > 2){
		cout << Arr[N-1-1]+Arr[N-2-1];
	}

	return 0;
}




