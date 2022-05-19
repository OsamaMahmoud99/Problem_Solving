

#include <bits/stdc++.h>

using namespace std;


void SORTB(int b[] , int size)
{
	for(int i=0; i<size; ++i)
	{
		for(int j=i+1; j<size; ++j)
		{
			if(b[i] < b[j])
				swap(b[i] , b[j]);
		}
	}
}
void SORTA(int a[] , int size)
{
	for(int i=0; i<size; ++i)
	{
		for(int j=i+1; j<size; ++j)
		{
			if(a[i] > a[j])
				swap(a[i] , a[j]);
		}
	}
}
int main()
{
	int t , n , k , a[30]={0} , b[30]={0} , Sum = 0;
	cin >> t;

	for(int i=0; i<t; ++i)
	{
		cin >> n >> k;
		 Sum = 0;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		for(int i=0; i<n; ++i)
			cin >> b[i];

		SORTA(a , n);
		SORTB(b , n);
		for(int i=0; i<k; ++i)
		{
			if(b[i] > a[i])
				swap(b[i] , a[i]);

		}
		for(int i=0; i<n; ++i)
			Sum+=a[i];
		cout << Sum <<"\n";
	}

	return 0;
}




