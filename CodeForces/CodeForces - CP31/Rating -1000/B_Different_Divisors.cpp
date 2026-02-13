#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(long long x){
    vector<bool> prime(x+1 , true);
    prime[0] = false;
    prime[1] = false;

    for(long long i = 2; i*i <= x; i++){
        if(prime[i]){
            for(long long j = i*i; j <= x; j += i){
                prime[j] = false;
            }
        }
    }
    return prime;
}

int main(){
    int tt;
    cin>>tt;
    const long long int mx= 200000;
    auto prime = sieve(mx);
    while(tt--){
        int d;
        cin>>d;
        bool once=false;
        vector<long long int> ans; 
        for(int i=d+1;i<=mx;i++){
            if(prime[i]){
                 ans.push_back(i);
                 i+=d-1;
            }
            if(ans.size()==2) break;
        }

        long long m = 1;
        for(auto& x : ans)  m*=x;
        cout<<m<<endl;
    }
}