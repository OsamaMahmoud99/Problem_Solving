/*
 * C.cpp
 *
 *  Created on: Feb 6, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t , n;
	cin >> t;

	while(t--){

		cin >> n;

		if((n/2)%2 == 0){

			cout << "YES\n";
			for(int i=1; i<=n/2; ++i){
				cout<< i*2<<' ';
			}
			for(int i=1; i<n/2; ++i){
				cout<< i*2-1<<' ';
			}
			cout<<n+(n/2)-1<<"\n";
		}
		else{
			cout<<"NO\n";
		}

	}

	return 0;
}




