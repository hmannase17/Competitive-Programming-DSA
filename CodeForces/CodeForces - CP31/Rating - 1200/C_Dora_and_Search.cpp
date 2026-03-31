#include <bits/stdc++.h>
using namespace std;

bool isMinOrMax(int val, set<int> &s){
	if ((*s.begin()) == val) return true;
	if ((*s.rbegin()) == val) return true;
	return false;
} 

int main(){
	int t;
	cin >> t; 
	while (t--){
		int n;
		cin >> n; 
		vector<int> arr(n);

		for (int i = 0; i<n; i++) cin >> arr[i]; 

		set<int> s(arr.begin(), arr.end()); 
		int i = 0, j = n-1; 
		
		while (i<j){
			if (isMinOrMax(arr[i], s)){
				s.erase(arr[i]); 
				i++;
				continue;
			}

			if (isMinOrMax(arr[j], s)){
				s.erase(arr[j]); 
				j--;
				continue;
			}
			break;
		} 

		if (i<j) cout << (i + 1) << " " << (j + 1) << "\n";
		else cout << "-1\n";
    }   
	return 0;
}