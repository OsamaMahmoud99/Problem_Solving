/*
 * J.cpp
 *
 *  Created on: Jul 11, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N , i , j , Count = 1;
	cin >> N;
	int Arr[N];

	for(i=0; i<N; ++i)
	{
		cin >> Arr[i];
	}

	/* sort from least value */
	for(i=0; i<N; ++i)
	{
		for(j=i+1; j<N; ++j)
		{
			if(Arr[i] > Arr[j]){
				swap(Arr[i] , Arr[j]);
			}
		}
	}

	for(i=0; i<N; ++i)
	{
		if(Arr[0] == Arr[i+1])
		{
			Count++;
		}
	}

	if((Count % 2) !=0)
	{
		cout << "Lucky";
	}
	else
	{
		cout << "Unlucky";
	}


	return 0;
}




