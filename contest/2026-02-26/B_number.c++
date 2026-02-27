#include <bits/stdc++.h>
using namespace std;

long long solve(long long n){
    long long k = 1;
    for(long long p=2;p*p<=n;p++){
        if(n%p==0){
            k*=p;
            while(n%p==0) n/=p;
        }
    }
    if(n>1) k*=n;
    return k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        cout<<solve(n)<<"\n";
    }
}