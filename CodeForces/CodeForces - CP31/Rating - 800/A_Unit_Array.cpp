#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int pos = 0, neg = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 1) pos++;
            else neg++;
        }

        int need = max(0, (neg-pos+1)/2);
        if((neg - need) % 2 != 0) need++;
        cout << need << endl;
    }
}
