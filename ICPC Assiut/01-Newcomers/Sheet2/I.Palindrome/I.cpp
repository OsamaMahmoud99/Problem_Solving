/*
 * I.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N , Rev_Num = 0 , Rem = 0 , Num;
	cin >> Num;

	N = Num;
	while(N > 0)
	{
		Rem = N % 10;
		Rev_Num = Rev_Num * 10 + Rem;
		N = N / 10;
	}
	if(Num == Rev_Num)
	{
		cout << Num << "\n";
		cout << "YES"<<"\n";
	}
	else
	{
		cout << Rev_Num <<"\n";
		cout << "NO" <<"\n";
	}
	return 0;
}




