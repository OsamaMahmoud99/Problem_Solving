/*
 * X.cpp
 *
 *  Created on: Sep 13, 2022
 *      Author: Osama
 */

#include <bits/stdc++.h>
using namespace std;


int main()
{
	int N , M , X , Y;

	cin >> N >> M;

	char Arr[101][101];

	for(int i=0; i<N; ++i)
	{
		for(int j=0; j<M; ++j)
		{
			cin >> Arr[i][j];
		}
	}

	cin >> X >> Y;

	X--;
	Y--;



		if(Arr[X][Y-1] != '.' && Arr[X][Y+1] != '.' && Arr[X-1][Y] !='.'&& Arr[X+1][Y]!='.'&&Arr[X+1][Y+1]!='.'
				&& Arr[X-1][Y+1]!='.'
				&& Arr[X-1][Y-1]!='.'
				&& Arr[X+1][Y-1]!='.')
		{
			cout << "yes";
		}
		else
		{
			cout << "no";
		}


	return 0;
}




