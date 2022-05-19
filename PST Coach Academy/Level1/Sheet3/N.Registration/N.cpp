/*
 * N.cpp
 *
 *  Created on: Feb 10, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	char S[10] , T[11];
	int flag = 0;
	cin >> S >> T;

	for(int i=0; i<strlen(S)&& i<strlen(T)-1; ++i)
		if(S[i] == T[i])
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	if(flag == 1)
		cout <<"Yes"<<"\n";
	else
		cout << "No"<<"\n";


	return 0;
}




