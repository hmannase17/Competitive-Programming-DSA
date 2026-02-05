#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    vector<int> v(n);
    bool zero = false ;
    for(int i= 0 ; i<n ; i++){
        cin >> v[i];
        if(v[0] == 0) zero = true ;
    }
    if(zero) cout << 0 << endl ;
    else {
        int mn = abs(v[0]);
        for(int i= 0 ; i<n ; i++) mn = min(abs(v[i]) , mn) ;
        cout << mn << endl ;
    }
}
