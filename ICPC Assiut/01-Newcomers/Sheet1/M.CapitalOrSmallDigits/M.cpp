/*
 * M.cpp
 *
 *  Created on: Jan 27, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	char X;
	cin >> X;

	if(X >= '0' && X<= '9')
		cout <<"IS DIGIT";
	else if(X >= 'A' && X <= 'Z')
		cout <<"ALPHA"<<"\n"<<"IS CAPITAL";
	else if(X >= 'a' && X <= 'z')
		cout <<"ALPHA"<<"\n"<<"IS SMALL";

	return 0;
}




