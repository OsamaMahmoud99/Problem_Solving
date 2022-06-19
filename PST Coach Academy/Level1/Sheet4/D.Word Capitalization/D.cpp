/*
 * D.cpp
 *
 *  Created on: Mar 29, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;

	if(S[0] >= 'a' && S[0] <= 'z'){
		S[0] = S[0]-'a'+'A';
	}
	cout << S <<"\n";

	return 0;
}




