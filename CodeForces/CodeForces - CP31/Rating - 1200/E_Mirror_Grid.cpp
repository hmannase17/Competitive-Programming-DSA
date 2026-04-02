#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; 
	while (t--){
		int n;
		cin >> n; 
		vector<vector<char>> v(n, vector<char>(n));

		for (int i = 0; i<n; i++){
			for (int j = 0; j<n; j++) cin >> v[i][j];
		} 

		int ans = 0; 

		for (int i = 0; i<n; i++){
			for (int j = 0; j<n; j++){
				int zero = 0, one = 0; 

				// Check the current cell and its three symmetric counterparts
				if (v[i][j] == '0') zero++;
				else one++;

				if (v[j][n-i-1] == '0') zero++;
				else one++;

				if (v[n-i-1][n-j-1] == '0') zero++;
				else one++;

				if (v[n-j-1][i] == '0') zero++;
				else one++;

				// If all are 0s or all are 1s, no operation is needed
				if ((zero == 0) || (one == 0)) continue;

				// Change the minority
				if (zero >= one){   
					ans += one;

					v[i][j] = '0';
					v[j][n-i-1] = '0';
					v[n-i-1][n-j-1] = '0';
					v[n-j-1][i] = '0';
				}
                else{
					ans += zero;

					v[i][j] = '1';
					v[j][n-i-1] = '1';
					v[n-i-1][n-j-1] = '1';
					v[n-j-1][i] = '1';
				}
			}
		}
		cout << ans << "\n";
	}

	return 0;
}

// Time Complexity (TC): O(t * n^2)
// Space Complexity (SC): O(t * n^2)
