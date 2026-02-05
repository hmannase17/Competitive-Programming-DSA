#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // Your code here
    int t;
    cin>> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> a(n) ;
        long long mx = INT_MIN ;
        for(int i = 0 ; i<n ; i++) {
            cin >> a[i] ;
            mx = max(mx , 1LL*a[i]);
        }

        cout<< mx*n << endl ;
    }
    return 0;
}
