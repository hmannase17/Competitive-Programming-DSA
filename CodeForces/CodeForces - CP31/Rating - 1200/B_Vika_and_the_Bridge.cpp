#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i<n; i++) cin >> v[i];

        vector<int> colors[k+1];

        for (int i = 1; i <= k; i++) colors[i].push_back(0);   // start
        for (int i = 0; i<n; i++) colors[v[i]].push_back(i+1);
        for (int i = 1; i <= k; i++) colors[i].push_back(n+1);  // end

        int ans = INT_MAX;
        priority_queue<int> pq[k+1];

        for (int i = 1; i <= k; i++){
            for (int j = 0; j<colors[i].size()-1; j++) 
                pq[i].push(colors[i][j+1] - colors[i][j] - 1);
            
            int mx = pq[i].top();  pq[i].pop();

            if (mx % 2 == 0){
                pq[i].push(mx / 2);
                pq[i].push((mx / 2) - 1);
            }
            else {
                pq[i].push(mx / 2);
                pq[i].push(mx / 2);
            }
            ans = min(ans, pq[i].top());
        }
        cout << ans << "\n";
    }
    return 0;
}