#include <bits/stdc++.h>
using namespace std;

int findCommon(string& a , string& b){
    int ct = 0 ;

    unordered_set<string> s;
    for(int i = 0 ; i<a.length() ; i++){
        string tmp = "";
        for(int j = i ; j<a.length() ; j++){
            tmp += a[j];
            s.insert(tmp);
        }
    }
    
    for(int i = 0 ; i<b.length() ; i++){
        string tmp = "";
        for(int j = i ; j<b.length() ; j++){
            tmp += b[j];
            if(s.count(tmp)) ct = max(ct , (int)tmp.length());
        }
    }

    return ct;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int ans = 0 ;
        string a , b ;
        cin >> a;
        cin >> b;

        int x = findCommon(a , b);

        ans = a.length()-x + b.length()-x ;
        cout << ans << endl;
    }
    return 0;
}