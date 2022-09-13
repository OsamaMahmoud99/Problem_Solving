/*
 * N..cpp
 *
 *  Created on: Sep 28, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A , B;
	cin >> A >> B;
	string S;
	cin >> S;

	if(S[A] != '-'){
		cout << "No";
		return 0;
	}
	bool Flag = 0;
	for(int i=0; i<(int)S.size()&&Flag==0; ++i){

		if((S[i]<'0' || S[i]>'9') && i!=A)
			Flag = 1;
	}

	if(Flag==0)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}




