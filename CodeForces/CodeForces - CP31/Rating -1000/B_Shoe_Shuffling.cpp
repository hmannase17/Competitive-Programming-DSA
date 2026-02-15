#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
		long long n;
		cin >> n;
        
        vector<pair<long long , int>> v(n);
        for(int i = 0 ; i<n ; i++) {
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(v.begin() , v.end());

        vector<int> ans(n);

        int i = 0;
        ans[0] = v[n-1].second + 1;
        for(i = 1 ; i<n-1 ; i++){
            ans[i] = v[i+1].second + 1;
        }

        ans[n-1] = v[n-2].second + 1;

        if(i != n-1){
            cout << -1 << endl;
            continue;
        }

        for(int i = 0 ; i<n ; i++) cout << ans[i] << " ";
        cout << endl;
        
    }
    return 0;
}