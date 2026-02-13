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

        if(a == b){
            cout << 0 << endl;
            continue;
        }

        unordered_set<long long> s;
        bool found = false;

        queue<long long> q;
        s.clear();
        q.push(a);

        while(!q.empty()){
            long long sz = q.size();

            while(sz--){
                long long curr = q.front();   q.pop();
                
                if(s.count(curr)) continue;
                s.insert(curr);

                if(curr == b){
                    found = true;
                    break;
                }

                if(curr > b){
                    if(curr%2 == 0 && !s.count(curr/2)) q.push(curr / 2);
                    if(curr%4 == 0 && !s.count(curr/4)) q.push(curr / 4);
                    if(curr%8 == 0 && !s.count(curr/8)) q.push(curr / 8);
                }
                else {
                    if(curr*2 <= b && !s.count(curr*2)) q.push(curr * 2);
                    if(curr*4 <= b && !s.count(curr*4)) q.push(curr * 4);
                    if(curr*8 <= b && !s.count(curr*8)) q.push(curr * 8);
                }
            }
            if(found) break;
            ans++ ;
        }

        if(!found) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}