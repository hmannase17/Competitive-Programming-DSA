#include <bits/stdc++.h>
using namespace std;

int main(){    
    int t;
    cin >> t;
    while(t--){
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long dy = d - b;

        if (dy<0 || c-a > dy){
            cout << -1 << "\n";
            continue;
        }

        long long left = (a+dy)-c;
        cout << dy+left << "\n";
    }
}
