/*
 * S.cpp
 *
 *  Created on: Jan 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	float X;
	cin >> X;

	if(X >= 0 && X <= 25)
		cout << "Interval [0,25]";
	if(X > 25 && X <= 50)
		cout << "Interval (25,50]";
	if(X > 50 && X <= 75)
		cout << "Interval (50,75]";
	if(X > 75 && X <= 100)
		cout << "Interval (75,100]";
	if(X < 0 || X > 100)
		cout << "Out of Intervals";

	return 0;
}




