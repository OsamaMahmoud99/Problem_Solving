/*
 * P.cpp
 *
 *  Created on: Jan 26, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int X , Y;
	cin >> X >> Y;

	if(X < Y)
		if((X+3) > Y)
			cout << "Yes" <<"\n";
		else
			cout << "No" <<"\n";

	else if( Y < X)
		if((Y+3) > X)
			cout << "Yes" <<"\n";
		else
			cout << "No" <<"\n";
	else
		cout << "No" <<"\n";




	return 0;
}




