/*
 * I.cpp
 *
 *  Created on: Mar 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S , T;
	cin >> S >> T;
	bool flag = 0;
    unsigned int i , j;

	if(S.size() != T.size()){
		cout << "NO\n";
		return 0;
	}

	for(i=0 , j=T.size() - 1; i<S.size(); ++i , --j){
		if(S[i] != T[j]){
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		cout<< "YES\n";
	}
	else{
		cout<< "NO\n";
	}

	return 0;
}




