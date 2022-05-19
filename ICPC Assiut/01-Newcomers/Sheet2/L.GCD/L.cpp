/*
 * L.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A , B , Max = 0;
	cin >> A >> B;

	if(A > B)
		swap(A , B);

	for(int i=1; i<=A; ++i)
	{
		if(A % i == 0 && B % i == 0)
		{
			if(i > Max)
				Max = i;
		}
	}
	cout << Max <<"\n";
	return 0;
}



