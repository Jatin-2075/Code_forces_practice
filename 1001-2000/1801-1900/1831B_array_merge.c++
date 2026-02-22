#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>a(n), b(n);
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;

        unordered_map<int,int> A,B;

        for(int i=0;i<n;){
            int j=i;
            while(j<n && a[j]==a[i]) j++;
            A[a[i]] = max(A[a[i]], j-i);
            i=j;
        }

        for(int i=0;i<n;){
            int j=i;
            while(j<n && b[j]==b[i]) j++;
            B[b[i]] = max(B[b[i]], j-i);
            i=j;
        }

        int ans=0;
        for(int x=1;x<=2*n;x++)
            ans=max(ans, A[x]+B[x]);

        cout<<ans<<"\n";
    }
}
