#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, xum = 0;
    cin >> n ;
    for(int i = 1; i<=n; i++) xum ^= i;
    for(int i = 0; i<n-1; i++){
        cin >> x;
        xum ^= x;
    }
    cout << xum << endl;
}