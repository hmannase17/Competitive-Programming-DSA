#include <bits/stdc++.h>
using namespace std;

int solve() {
	int n;
	cin >> n;
	vector<int> p(n) , tmp; 

    for(int i = 0 ; i<n ; i++){
        cin >> p[i];
        if(p[i] != i) tmp.push_back(p[i]);    
    }
    
    // 0 will always be an answer
    if(tmp.empty()) return 0 ;  // already sorted 
    
    int x = (1 << 30) - 1 ;  // set all bits
    
    for(int i = 0 ; i<tmp.size() ; i++) x &= tmp[i];    // common of all

    return x;
}

int main(){
	int t;
	cin >> t;
	while (t--) cout << solve() << endl;
}
