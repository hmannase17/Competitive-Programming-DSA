#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int len = to_string(n).size();
        int base = pow(10, len-1);

        int ans = 9*(len-1) + min(9, n/base);
        cout << ans << "\n";
    }
}
