#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        long long x;
        cin >> n >> x;

        long long free = 0, maxNet = LLONG_MIN;

        for (int i = 0; i<n; i++) {
            long long a, b, c;
            cin >> a >> b >> c;
            
            free += (b-1)*a;
            long long currNet = (b*a)-c;
            if (currNet > maxNet) maxNet = currNet;
        }

        if (free >= x) {
            cout << 0 << "\n";
            continue; 
        } 

        if (maxNet <= 0){
            cout << -1 << "\n";
            continue;
        } 
        
        long long dist = x-free ;
        long long ans = (dist+maxNet-1)/maxNet;  // ceil
        cout << ans << "\n";
    }
    return 0;
}