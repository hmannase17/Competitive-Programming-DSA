#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        if (s <= k) {
            long long time = m % k;
            long long rem = s - time;
            cout << max(0LL, rem) << endl;
        } 
        else {
            long long interval = m /k;
            long long time = m % k;

            if (interval % 2 == 0) cout << s - time << endl;
            else cout << k - time << endl;
        }
    }
    return 0;
}