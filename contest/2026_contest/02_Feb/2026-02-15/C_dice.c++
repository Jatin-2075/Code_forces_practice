#include <bits/stdc++.h>
using namespace std;

bool ok(int a,int b){
    if(a==b) return false;
    if(a+b==7) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        for(int&i:a)cin>>i;

        const int INF=1e9;
        vector<int>dp(7,0),ndp(7,INF);

        for(int x=1;x<=6;x++)
            dp[x]=(a[0]!=x);

        for(int i=1;i<n;i++){
            fill(ndp.begin(),ndp.end(),INF);

            for(int x=1;x<=6;x++){
                for(int y=1;y<=6;y++){
                    if(ok(x,y))
                        ndp[x]=min(ndp[x],dp[y]+(a[i]!=x));
                }
            }
            dp=ndp;
        }
        cout<<*min_element(dp.begin()+1,dp.end())<<"\n";
    }
}
