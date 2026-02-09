#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<vector<bool>> available(n, vector<bool>(26, false));

        for (int i = 0; i<k; i++){
            string s;
            cin >> s;
            for (int j = 0; j<n; j++) available[j][s[j] - 'a'] = true;
        }

        vector<int> div;
        for (int i = 1; i*i <= n; i++) {
            if (n % i == 0) {
                div.push_back(i);
                if (i*i != n) div.push_back(n / i);
            }
        }
        sort(div.begin(), div.end());

        for (int& d : div) {
            string tmp = "";
            bool validDivisor = true;

            for (int j = 0; j<d; j++) {
                char currChar = ' ';
                bool found = false;

                for (int c = 0; c<26; c++){
                    bool validChar = true;

                    for (int pos = j; pos<n; pos += d) {
                        //this char must be available at every intrval of d 
                        if (!available[pos][c]) {
                            validChar = false;
                            break;
                        }
                    }

                    if (validChar) {
                        currChar = (char)('a' + c);
                        found = true;
                        break;
                    }
                }

                if (!found){
                    validDivisor = false;
                    break;
                }
                else tmp += currChar;
            }

            if (validDivisor) {
                for (int i = 0; i< n/d; i++) cout << tmp;                
                cout << endl;
                break ;
            }
        }
    }
    return 0;
}