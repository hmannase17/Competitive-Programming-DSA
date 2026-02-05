#include <bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b == 0) return a;
    return gcd(b , a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i<n; i++) cin >> a[i];

        bool ok = false;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(gcd(a[i], a[j]) <= 2){
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
}
