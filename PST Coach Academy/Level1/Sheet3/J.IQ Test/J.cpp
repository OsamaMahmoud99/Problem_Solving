/*
 * J.cpp
 *
 *  Created on: Feb 8, 2021
 *      Author: Osama Mahmoud
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str[4];
	bool Flag = 0;
	for(int i=0; i<4; ++i){
		cin >> str[i];
	}

	for(int i=0; i<3&&Flag==0; ++i){

		for(int j=0; j<3&&Flag==0; ++j){

			if(str[i][j]+str[i][j+1]+str[i+1][j]+str[i+1][j+1] != 162){
				Flag = 1;
			}
		}
	}
	if(Flag)
		cout <<"YES";
	else
		cout <<"NO";

	return 0;
}




