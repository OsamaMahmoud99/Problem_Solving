/*
 * H.cpp
 *
 *  Created on: Jan 26, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	double A , B;
	cin >> A >> B;

	cout << "floor "<< A <<" / "<< B <<" = " << floor(A/B) << "\n";
	cout << "ceil "<< A << " / "<< B <<" = "<< ceil(A/B) << "\n";
	cout << "round "<< A << " / "<< B << " = "<< round(A/B) << "\n";

	return 0;
}



