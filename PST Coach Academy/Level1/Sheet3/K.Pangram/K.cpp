/*
 * K.cpp
 *
 *  Created on: Feb 10, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;


unsigned char Arr[100];
int main()
{
	int N , i = 0 , Count = 0;
	cin >> N;

	unsigned char C;

	for(i=0; i<N; ++i)
	{
		cin >> C;

		if(C >= 'A' && C <='Z')
		{
			if(Arr[C] == 0){
				Arr[C] = C;
				Count++;
			}
		}
		else if(C >='a' && C <= 'z')
		{
			if(Arr[C - 32] == 0){
				Arr[C - 32] = C;
				Count++;
			}
		}
	}

	if(Count == 26){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

	return 0;
}




