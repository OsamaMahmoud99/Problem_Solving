/*
 * B.cpp
 *
 *  Created on: Jul 21, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	char ch = 'a';
	int Min = 0;
	for(int i=0; i<(int)s.size(); ++i){

		Min += min(abs(ch-s[i]) , 26-abs(ch-s[i]) );
		ch = s[i];
	}
	cout << Min;
	return 0;
}




