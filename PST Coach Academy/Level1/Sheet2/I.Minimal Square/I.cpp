/*
 * I.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T , A , B;
	cin >> T;

	for(int i=1; i<=T; ++i)
	{
		cin >> A >> B;
		int Ans = min(max(2*A , B) , max(A , 2*B));
		cout << Ans*Ans<<"\n";
	}

	return 0;
}




