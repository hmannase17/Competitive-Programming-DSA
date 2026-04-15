#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; 
	while (t--)	{
		int n;
		cin >> n; 
		vector<int> v(n);
		for (int i = 0; i<n; i++) cin >> v[i]; 

		vector<long long> mxSetBit(31, 0);

		for (int i = 0; i<n; i++){
			for (int bit = 30; bit >= 0; bit--){
				if ((v[i] & (1 << bit))){
					mxSetBit[bit]++;
					break; 
				}
			}
		}

		long long ans = 0;
		for (int i = 0; i<31; i++) ans += (mxSetBit[i] * (mxSetBit[i] - 1)) / 2;
		cout << ans << "\n";
	}
	return 0;
}



