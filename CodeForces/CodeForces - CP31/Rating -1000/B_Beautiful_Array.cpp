#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
		long long n,k,b,s;
		cin >> n >> k >> b >> s;
        
        if(s < k*b || s > (k*b + (k-1)*n)){
            cout << -1 << endl;
            continue;
        }

        vector<long long> v(n);

        v[0] = k*b ;    // fill rest with less than k and make sure the sum is s
        s -= v[0];

        for(int i = 0 ; i<n; i++){
            long long add = min(k-1 , s);
            v[i] += add;  // bcoz k-1 / k adds 0 beauty
            s -= add;
        }

        for(long long i = 0 ; i<n ; i++) cout << v[i] << " ";
        cout << endl;
        
    }
    return 0;
}