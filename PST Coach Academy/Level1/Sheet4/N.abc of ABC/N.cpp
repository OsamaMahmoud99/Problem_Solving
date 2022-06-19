/*
 * N.cpp
 *
 *  Created on: Mar 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string  S;
	cin >> S;

    sort(S.begin(), S.end());
    if(S == "abc"){
    	cout <<"Yes\n";
    }
    else{
    	cout <<"No\n";
    }

	return 0;
}




