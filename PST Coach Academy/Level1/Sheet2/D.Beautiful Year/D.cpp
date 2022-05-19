/*
 * D.cpp
 *
 *  Created on: Jan 31, 2021
 *      Author: Osama Mahmoud
 */
/**************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d",&n);
	while(1)
	{
		n++;
		bool f = 1;
		for(int temp=n; temp  && f ;temp/=10)
		{
			for(int temp2=temp/10; temp2 ;temp2/=10)
			{
				if(temp%10 == temp2%10)
				{
					f=0;
					break;
				}

			}
		}
		if(f) break;
	}
	printf("%d",n);
	return 0;
}



