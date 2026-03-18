#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int &x : a) cin >> x;

    int ans = 0;
    int mx = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] >= mx) { 
            ans++;
            mx = a[i];
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    
    return 0;
}