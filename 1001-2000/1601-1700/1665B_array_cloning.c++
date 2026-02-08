#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        map<long long, long long> mp;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            mp[a]++;
        }
        long long mx = 0;
        for(auto p : mp)mx = max(mx, p.second);
        int ans = 0;
        while(mx < n){
            int take = min(mx, n - mx);
            ans += 1 + take;
            mx += take;
        }
        cout << ans << "\n";
    }
}