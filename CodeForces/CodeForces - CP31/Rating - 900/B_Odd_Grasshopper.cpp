#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
        long long d = 0;

        switch (n % 4){
            case 0: d = 0; break;
            case 1: d = -n; break;
            case 2: d = 1; break;
            case 3: d = n + 1; break;
        }

        if (x % 2 == 0) {
            cout << x + d << endl;
        } else {
            cout << x - d << endl;
        }
    }
    return 0;
}