#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , sum = 0;
        cin >> n;
        vector<int> v(n);
        for(int i= 0 ; i<n-1 ; i++){
            cin >> v[i];
            sum += v[i];
        }
        cout << -sum << endl ;
    }
}
