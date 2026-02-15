#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--)	{
		int n;
        cin >> n ;
        string s;
        cin >> s;

        int ct = 0 , ans = 0;
        for(char& c : s){
            if(c == '(') ct++ ;
            else ct--;
            ans = max(ans , -(ct));  // only update when wrong i.e. closing brackets more 
        }
        cout << ans << endl ;
    }
	return 0;
}
