#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; 
	while (t--)
	{
		long long n;
		cin >> n; 
		vector<long long> a(n);
		long long one = 0; 
		long long zero = 0; 
		for (long long i = 0; i<n; i++){
            cin >> a[i];
            if(a[i] == 1) one++ ;
            else if(a[i] == 0) zero++ ;
        }
        long long ans = pow(2 , zero)*one ;  // pow returns double and it might show 1e9 + ... not exact integer
		cout << ans<< endl; 
	}
	return 0;
}
