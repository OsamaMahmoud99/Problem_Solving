/*
 * H.cpp
 *
 *  Created on: Mar 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	cin >> S;
	int UpperCount = 0 , LowerCount = 0;

	for(unsigned int i=0; i<S.size(); ++i){
		if(S[i] >= 'A' && S[i] <= 'Z'){
			UpperCount++;
		}
		else{
			LowerCount++;
		}
	}

	if(UpperCount > LowerCount){
		for(unsigned int i=0; i<S.size(); ++i){
			if(S[i] >= 'a' && S[i] <= 'z'){
				S[i]= S[i]-'a'+'A';
			}
		}
		cout << S <<"\n";
	}
	else if((UpperCount < LowerCount) || (UpperCount == LowerCount)){
		for(unsigned int i=0; i<S.size(); ++i){
			if(S[i] >= 'A' && S[i] <= 'Z'){
				S[i] = S[i]-'A'+'a';
			}
		}
		cout << S <<"\n";
	}

	return 0;
}




