#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        if (n<4 || n%2 != 0) {
            cout << "-1\n";
            continue;
        }

        long long mx = n/4;
        long long mn;

        if (n%6 == 0) mn = n / 6;
        else if (n%6 == 2) {
            if (n<8) {
                cout << "-1\n";
                continue;
            }
            mn = (n-8)/6 + 2;
        } 
        else if (n%6 == 4) {
            if (n<4) {
                cout << "-1\n";
                continue;
            }
            mn = (n-4)/6 + 1;
        } 
        else {
            cout << "-1\n";
            continue;
        }

        if (mn > mx) cout << "-1\n" ;
        else cout << mn << " " << mx << "\n";
    }

    return 0;
}
