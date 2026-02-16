#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;

    if(n == 2 || n == 3){
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    for(int i = 2 ; i<=n ; i+=2) v.push_back(i);
    for(int i = 1 ; i<=n ; i+=2) v.push_back(i);

    for(auto& x : v) cout << x << " ";
    return 0;
}
