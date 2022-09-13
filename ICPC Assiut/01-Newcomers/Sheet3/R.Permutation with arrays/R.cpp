/*
 * R.cpp
 *
 *  Created on: Sep 13, 2022
 *      Author: Osama
 */

#include <bits/stdc++.h>
using namespace std;


int main()
{

	int N , count = 0;

	cin >> N;

	long long A[N] , B[N];

	for(int i=0; i<N; ++i)
	{
		cin >> A[i];
	}
	for(int j=0; j<N; ++j)
	{
		cin >> B[j];
	}

	sort(A , A+N);
	sort(B  , B+N);

	bool flag = 0;
	for(int i=0; i<N; ++i)
	{
		if(A[i] != B[i])
		{
			flag = 1;
		}
	}

	if(flag == 0){
		cout << "yes";
	}
	else{
		cout << "no";
	}
	return 0;
}




