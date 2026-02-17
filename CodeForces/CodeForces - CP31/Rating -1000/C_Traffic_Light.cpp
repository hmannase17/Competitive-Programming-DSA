#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin >> t; 
	while (t--)	{
		long long n;
        char c ;
		cin >> n >> c;
        string s ;
        cin >> s;

        string doubled = s+s ;

        int gIdx = INT_MAX , ans = 0;
        for(int i = doubled.size()-1 ; i>=0 ; i--){
            if(doubled[i] == 'g'){
                gIdx = i;
                continue;
            }
            if(gIdx == INT_MAX) continue;

            if(doubled[i] == c) ans = max(ans , gIdx - i);
        }
        cout << ans << endl; 
	}
	return 0;
}



