#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n ;
        vector<int> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];

        bool flag = true ;
        int one = INT_MIN , two = INT_MIN , ctOne = 0 , ctTwo = 0;

        // Read ques carefully only two distinct values can be there and their count can differ by only one
        for(int i = 0 ; i<n ; i++){
            if(one == INT_MIN){
                one = v[i];
                ctOne++;
            }
            else if(v[i] == one) ctOne++;
            else if(two == INT_MIN){
                two = v[i];
                ctTwo++;
            }
            else if(v[i] == two) ctTwo++;
            else{
                flag = false;
                break;
            }
        }

        if(one != INT_MIN && two != INT_MIN){
            if (abs(ctOne - ctTwo) > 1) flag = false ;
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n" ;    
    }
}
