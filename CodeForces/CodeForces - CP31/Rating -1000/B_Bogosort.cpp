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
        vector<int> v(n);
        for(int i = 0 ; i<n ; i++) cin >> v[i];

        sort(v.rbegin() , v.rend());

        for(auto& x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}