#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;
        vector<int> a(n);
        int ctR = 0 ,ctC = 0;

        for (int i = 0; i<n; ++i) cin >> a[i];

        int both = 0, row = 0, col = 0;
        for (int& x : a){
            if (x <=h && x<=l) both++;
            else if (x <= h) row++;
            else if (x <= l) col++;
        }
        int total = 0;
        
        int commonVal = min(row, col);
        total += commonVal;
        row -= commonVal;
        col -= commonVal;
        
        int rowVal = min(row, both);
        total += rowVal;
        both -= rowVal;
        
        int colVal = min(col, both);
        total += colVal;
        both -= colVal;
        
        total += both/2;
        cout << total << endl;
    }
    return 0;
}