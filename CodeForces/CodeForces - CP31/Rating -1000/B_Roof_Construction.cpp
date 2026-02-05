#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; 
	while (t--){
		long long n;
		cin >> n; 
		n--; 
		long long msb = log2(n); // Find the most significant bit position of n
		vector<long long> ans; // Vector to store the sequence of pillar heights
		long long num = pow(2, msb) - 1; // Calculate the largest number with all bits set below msb
		while (num >= 0) {
			ans.push_back(num);
			num--;
		}
		num = pow(2, msb); 
		while (num <= n) {
			ans.push_back(num);
			num++;
		}

		for (auto& it : ans) cout << it << " ";
		cout << endl;
	}
}
