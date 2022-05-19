/*
 * U.cpp
 *
 *  Created on: Jan 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	float N;
	cin >> N;

	if( (int)N - N == 0 )
		cout <<"int "<< N;
	else
		cout<<"float "<< (int)N << " " << N-(int)(N);

	return 0;
}




