/*
 * Z.cpp
 *
 *  Created on: Sep 11, 2022
 *      Author: Osama
 */

#include <bits/stdc++.h>
using namespace std;



int main()
{
	int N , Q;
	cin >> N >> Q;

	long long A[N];

	for(int i=0; i<N; ++i)
	{
		cin >> A[i];
	}

	//sort
	sort(A , A+N);

	long long X;
	bool flag = 0;
	int First = 0 , Last = N , Mid;
	for(int i=0; i<Q; ++i)
	{
		cin >> X;
		flag = 0;
		First = 0 , Last = N;

		while(First <= Last)
		{
			Mid = First+(Last-First)/2;

			if(X == A[Mid]){
				flag = 1;
				break;
			}
			else if(X > A[Mid])
			{
				First = Mid + 1;
			}
			else
			{
				Last = Mid - 1;
			}
		}

		if(flag == 1){
			cout << "found\n";
		}
		else{
			cout <<"not found\n";
		}

	}


	return 0;
}




