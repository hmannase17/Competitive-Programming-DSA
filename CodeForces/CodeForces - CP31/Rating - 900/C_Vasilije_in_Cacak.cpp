#include <bits/stdc++.h>
using namespace std;

long long natural(long long x){
    return (x)*(x+1)/2 ;
}

int main() {
    int t;
    cin >> t ;
    while(t--){
        long long n,k,x ;
        cin >> n >> k >> x ;

        if(x < natural(k) || x > natural(n)- natural(n-k)) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
