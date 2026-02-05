#include <iostream>
#include <vector>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        vector<int> a;
        for(int i = 0 ; i<n ; i++){
            int x; cin>>x;
            x==1 ? a.push_back(2) : a.push_back(x);
        }
        for(int i =0; i< n-1; i++)
                while(a[i+1]%a[i]==0) a[i+1]++;

        for(int& x : a) cout << x << " " ;
        cout << endl ;
    }
    return 0;
}