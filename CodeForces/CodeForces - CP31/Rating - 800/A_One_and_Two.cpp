#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , two = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin >> a[i];
            if(a[i] == 2) two++ ;
        }

        if(two % 2){
            cout << -1 << endl;
            continue;
        }
        int k = two / 2 ;

        for(int i = 0 ; i<n ; i++){
            if(a[i] == 2) k-- ;
            if(!k){
                cout << i+1 << endl ;
                break;
            }
        }
    }
}
