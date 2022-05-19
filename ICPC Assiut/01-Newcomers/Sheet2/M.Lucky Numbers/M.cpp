/*
 * M.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: asss5
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A , B , Num , Rem , Count = 0;
	bool  flag = 0;
	cin >> A >> B;

	for(int i=A; i<=B; ++i)
	{
		Num = i;
		flag = 0;
		while(Num != 0)
		{
			Rem = Num % 10;
			Num/=10;
			if(Rem != 4 && Rem != 7)
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			cout << i << " ";
			Count++;
		}

	}
	if(Count == 0)
		cout<< -1 <<"\n";


	return 0;
}




