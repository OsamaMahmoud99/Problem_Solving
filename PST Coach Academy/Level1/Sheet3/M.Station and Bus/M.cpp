/*
 * M.cpp
 *
 *  Created on: Feb 10, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	char str[4];

	cin >> str;

	if(str[0] == str[1] && str[1] == str[2])
		cout << "No" <<"\n";
	else
		cout << "Yes" <<"\n";
	return 0;
}




