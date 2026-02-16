#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int x = 1 , ct = 1;
    
    for(int i = 1; i<s.length() ; i++){
        if(s[i] == s[i-1]) ct++ ;
        else ct = 1 ;
        x = max(x , ct);
    } 
    cout << x << " ";
    return 0;
}
