#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<long long> a(n);
        for(auto &x : a) cin >> x;

        vector<pair<long long,int>> b;
        for(int i=0;i<n;i++)
            b.push_back({a[i],i});

        sort(b.begin(), b.end());
        
        vector<long long> pref(n);
        pref[0] = b[0].first;
        for(int i=1;i<n;i++)
            pref[i] = pref[i-1] + b[i].first;

        vector<int> reach(n);
        reach[n-1] = n-1;

        for(int i=n-2;i>=0;i--){
            if(pref[i] >= b[i+1].first)
                reach[i] = reach[i+1];
            else
                reach[i] = i;
        }

        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int originalIndex = b[i].second;
            ans[originalIndex] = reach[i];
        }

        for(int x:ans) cout<<x<<" ";
        cout<<"\n";
    }
}