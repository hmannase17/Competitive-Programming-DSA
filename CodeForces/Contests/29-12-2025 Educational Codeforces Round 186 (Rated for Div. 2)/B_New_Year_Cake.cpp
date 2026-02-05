#include <bits/stdc++.h>
using namespace std;

long long check(long long x, long long y) {
    long long cur = 1;
    int ans = 0;
    bool first = true;

    while (true) {
        if(first){
            if (cur > x) break;
            x -= cur;
        } 
        else {
            if (cur>y) break;
            y -= cur;
        }
        ans++;
        cur *= 2;
        first = !first;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long p = check(a, b); 
        long long q = check(b, a); 
        cout << max(p, q) << endl;
    }
    return 0;
}
