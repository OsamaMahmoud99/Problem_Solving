/*
 * U.cpp
 *
 *  Created on: Sep 11, 2022
 *      Author: Osama
 */

#include <bits/stdc++.h>
using namespace std;



int main()
{

	int N , M;

	cin >> N >> M;

	long long A[N];
	for(int i=0; i<N; ++i){
		cin >> A[i];
	}
	long long B[M];
	for(int i=0; i<M; ++i){
		cin >> B[i];
	}

	int counter=0 , j = 0;
	for(int i=0; i<N; ++i)
	{

		if(A[i] == B[j])
		{
			counter++;
			j++;
		}
	}

	if(counter == M)
	{
		cout << "YES"<<endl;
	}
	else{
		cout << "NO"<<endl;
	}
	return 0;
}




