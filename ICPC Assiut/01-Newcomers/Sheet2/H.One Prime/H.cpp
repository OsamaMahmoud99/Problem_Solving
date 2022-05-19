#include <bits/stdc++.h>

using namespace std;


int main()
{
	int X , flag = 0;
	cin >>X;

	for(int i=2; i<X; ++i)
	{
		if(X%i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		cout << "NO"<<"\n";
	else
		cout <<"YES"<<"\n";
	return 0;
}




