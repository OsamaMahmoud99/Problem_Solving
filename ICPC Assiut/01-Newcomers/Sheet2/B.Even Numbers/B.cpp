/*
 * B.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned int N , i , flag = 0;
	cin >> N;

	for(i=1; i<=N; ++i)
		if(i%2 == 0)
		{
			cout << i <<"\n";
			flag = 1;
		}
	if(flag == 0)
		cout << -1 <<"\n";


	return 0;
}




