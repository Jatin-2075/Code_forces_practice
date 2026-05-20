#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> p(n);

        for(int i=0;i<n;i++) cin>>p[i];

        int pos = find(p.begin(),p.end(),n)-p.begin();

        if(pos!=0) swap(p[0],p[pos]);

        for(int i=0;i<n;i++){
            if(i) cout<<" ";
            cout<<p[i];
        }
        cout<<"\n";
    }
}