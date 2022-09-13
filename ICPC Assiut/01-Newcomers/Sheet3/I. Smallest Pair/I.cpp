/*
 * I.cpp
 *
 *  Created on: Jul 11, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T , N ;

	cin >> T;

	for(int i=0; i<T; ++i)
	{
		cin >> N;
		int Arr[N+1];
		for(int i=1; i<=N; ++i)
		{
			cin >> Arr[i];
		}

		int Min = 1e9;
		for(int i=1; i<=N; ++i){
			for(int j=i+1; j<=N; ++j)
			{
				int Res = Arr[i]+Arr[j]+j-i;
				if(Res < Min)
					Min = Res;
			}
		}
		cout << Min <<"\n";
	}


	return 0;
}




