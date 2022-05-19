/*
 * K.cpp
 *
 *  Created on: Jan 26, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long A , B , C;
	cin >> A >> B >> C;

	if(A > B)
	{
		if(B > C)      // Min number
			cout << C;
		else
			cout << B;
		cout<<" ";
		if(A > C)     // Max number
			cout << A;
		else
			cout << C;

	}
	else
	{
		if(A > C)    // Min number
			cout << C;
		else
			cout << A;
		cout << " ";
		if(B > C)   // Max number
			cout << B;
		else
			cout << C;

	}

	return 0;
}




