#include <bits/stdc++.h>
using namespace std;

bool static comp(const pair<int,int>& a , const pair<int,int>& b){
    if(a.first == b.first) return a.second < b.second ;
    else return a.first > b.first ;
}

int main(){
	int t;
	cin >> t;
	while (t--)	{
		long long n,k;
        cin >> n>>k ;
        vector<long long> v(n) ;
        vector<pair<int,int>> tmp ;
        for(int i = 0 ; i<n ; i++){
            cin >> v[i];
            int rem = v[i] % k ;
            if(rem == 0) rem = k ; // to get higher priority
            tmp.push_back({rem , i+1});
        }
    
        sort(tmp.begin() , tmp.end() , comp);

        for(auto& x : tmp) cout << x.second << " " ;
        cout << endl ;
    }
	return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while (t--)	{
// 		long long n,k;
//         cin >> n>>k ;
//         vector<long long> v(n) ,ans;
//         priority_queue<pair<int,int>> pq ;
//         for(int i = 0 ; i<n ; i++){
//             cin >> v[i];
//             pq.push({v[i] , -i});
//         }
    
//         while(!pq.empty()){
//             auto p = pq.top();  pq.pop();
//             p.first -= k ;

//             if(p.first <= 0){
//                 ans.push_back((-p.second) + 1);  // negative to get the lower index
//                 continue;
//             }

//             pq.push(p);
//         }

//         for(auto& x : ans) cout << x << " " ;
//         cout << endl ;
//     }
// 	return 0;
// }
