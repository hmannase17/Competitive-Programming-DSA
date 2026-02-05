#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,a,b;
        cin >> n >> a >> b;

        if(a == b && a == n) cout << "Yes\n" ;
        else if(a+b >= n-1) cout << "No\n" ;
        else 
            cout << "Yes\n" ;
    }
}
