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
		map<long long, long long> mp; // freq

		for (long long i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

		long long mx_freq = 0;
		for (auto& it : mp) mx_freq = max(mx_freq, it.second);

		long long ops = 0; 
		while (mx_freq < n) {
			ops++; 
			if (mx_freq * 2 <= n){
				ops += mx_freq; // Add ops for swapping all the copies
				mx_freq *= 2; // Double the current highest frequency
			}
			else {
				ops += n - mx_freq; // Add ops for swapping only the required copies
				mx_freq = n; // Set the highest frequency to the size of the array
			}
		}
		cout << ops << endl; // Output the number of ops for the current test case
	}
	return 0;
}
