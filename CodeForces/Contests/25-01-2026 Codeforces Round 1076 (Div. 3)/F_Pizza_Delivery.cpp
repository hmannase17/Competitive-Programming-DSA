#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,ax,ay,bx,by;
        cin >> n >>ax >>ay>>bx>>by;
        vector<int> x(n) , y(n) ;
        for(int i = 0; i<n; i++) cin >> x[i];
        for(int i = 0; i<n; i++) cin >> y[i];

        unordered_map<int , vector<int>> mp;
        for(int i = 0 ; i<n ; i++) mp[x[i]].push_back(y[i]);

        for(auto& it : mp){
            sort(it.second.begin() , it.second.end());
        }

        sort(x.begin() , x.end());
        x.erase(unique(x.begin(), x.end()), x.end()); 

        long long dp0 = 0, dp1 = 0;
        long long y0 = ay, y1 = ay;

        for(auto& p : x){
            long long dx = p - ax;
            long long ndp0 = dx ;
            long long ndp1 = dx ;

            auto& v = mp[p];
            long long lo = v.front(), hi = v.back();
            long long len = hi - lo;

            ndp0 += min(dp0+abs(y0 - hi)+len,dp1+abs(y1 - hi)+len);
            ndp1 += min(dp0+abs(y0 - lo)+len,dp1+abs(y1 - lo)+len);

            dp0 = ndp0;
            dp1 = ndp1;
            y0 = lo;
            y1 = hi;
            ax = p;
        }

        long long ans = min(
            dp0+(bx - ax)+abs(y0 - by),
            dp1+(bx - ax)+abs(y1 - by)
        );
        cout << ans <<endl ;
    }
    return 0;
}