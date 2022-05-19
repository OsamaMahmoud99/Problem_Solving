/*
 * Q.cpp
 *
 *  Created on: Jan 27, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	float X , Y;
	cin >> X >> Y;

	if(X == 0 && Y == 0)
		cout <<"Origem";
	else if(X > 0 && Y > 0)
		cout <<"Q1";
	else if(X > 0 && Y < 0)
		cout <<"Q4";
	else if(X < 0 && Y > 0)
		cout <<"Q2";
	else if(X < 0 && Y < 0)
		cout <<"Q3";
	else if((X > 0 && Y == 0) || (X < 0 && Y == 0))
		cout <<"Eixo X";
	else if((X == 0 && Y > 0) ||  (X == 0 && Y < 0) )
		cout <<"Eixo Y";

	return 0;
}




