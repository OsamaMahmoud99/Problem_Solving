/*
 * T.cpp
 *
 *  Created on: Jan 30, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long A , B , C;
	cin >> A >> B >> C;

	long long Temp;
	long long Res1 = A , Res2 = B , Res3 = C;

	if(A > B)
	{
		Temp = A;
		A = B;
		B = Temp;
	}
	if(A > C)
	{
		Temp = A;
		A = C;
		C = Temp;
	}
	if(B > C)
	{
		Temp = B;
		B = C;
		C = Temp;
	}

	cout << A << "\n" << B << "\n" << C << "\n";
	cout<<"\n";
	cout << Res1 << "\n" << Res2 << "\n" << Res3 << "\n";



	return 0;
}




