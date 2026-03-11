#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s; 
	int n = s.size(); 
	set<char> st; 
	int k;
	
	for (k = 0; k<n; k++) { 
		if (!st.count(s[k])) st.insert(s[k]); 
		else break; 
	}
	
	for (int i = k; i<n; i++) { // must be periodic
		if (s[i] != s[i-k]){
			cout << "NO" << endl; 
			return;
		}
	}
	cout << "YES" << endl; 
}

int main() {
	int t;
	cin >> t; 
	while (t--) solve(); 
}
