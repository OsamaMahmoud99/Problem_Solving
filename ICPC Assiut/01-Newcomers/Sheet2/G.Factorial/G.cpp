#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T , N;
	long long Fact = 1;
	cin >> T;
	for(int i=0; i<T; ++i)
	{
		cin >> N;
        Fact = 1;
		while(N)
		{
			Fact = Fact * N;
			N--;
		}
		cout << Fact <<"\n";
	}


	return 0;
}




