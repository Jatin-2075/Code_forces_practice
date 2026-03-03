#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        long long n; cin>>n;

        long long spf = n;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                spf=i;
                break;
            }
        }

        if(spf==n){
            cout<<1<<" "<<n-1<<"\n";
        }else{
            long long a = n/spf;
            cout<<a<<" "<<n-a<<"\n";
        }
    }
}