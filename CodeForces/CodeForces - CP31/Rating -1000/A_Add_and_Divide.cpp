#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
		long long a,b;
		cin >> a >> b; 
        long long ans = 0;

        if(a == 0){
            cout << 0 << endl;
            continue;
        }

        set<pair<long long ,long long>> s;
        bool found = false;

        queue<pair<long long , long long>> q;
        s.clear();
        q.push({a , b});

        while(!q.empty()){
            long long sz = q.size();

            while(sz--){
                auto [curr , div] = q.front();  q.pop();
                
                if(s.count({curr , div})) continue;
                s.insert({curr , div});

                if(curr == 0){
                    found = true;
                    break;
                }

                q.push({curr/div , div});
                q.push({curr , div + 1});
            }
            if(found) break;
            ans++ ;
        }

        if(!found) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}