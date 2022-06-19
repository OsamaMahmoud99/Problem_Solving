/*
 * F.cpp
 *
 *  Created on: Mar 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str1  , str2;
	cin >> str1 >> str2;
    int flag = 0;

	for(int i=0; i<(int)str1.size(); ++i){
		if(str1[i] >='A' && str1[i] <= 'Z'){
			str1[i]+=32;
		}
		if(str2[i] >='A' && str2[i] <= 'Z'){
			str2[i]+=32;
		}
	}

	for(int i=0; i<(int)str1.size(); ++i){
		if(str1[i] > str2[i]){
			cout << 1 <<"\n";
			flag = 1;
			break;
		}
		if(str1[i] < str2[i]){
			cout << -1 <<"\n";
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout << 0 <<"\n";
	}

	return 0;
}




