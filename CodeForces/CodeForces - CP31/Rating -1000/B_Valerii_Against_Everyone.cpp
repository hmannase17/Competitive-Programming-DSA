#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
		long long n;
		cin >> n; 
        unordered_set <long long> s ;

        long long x ;
		for (int i = 0; i<n; i++) {
            cin >> x;
            s.insert(x);
        }
		if(s.size() != n) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
    return 0;
}