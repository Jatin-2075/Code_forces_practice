#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    s = " " + s;

    vector<int> vis(n + 1, 0);

    int ans = 0;

    for(int k = 1; k <= n; k++) {

        for(int multiple = k; multiple <= n; multiple += k) {

            if(s[multiple] == '1') {
                break;
            }

            if(!vis[multiple]) {
                vis[multiple] = 1;
                ans += k;
            }
        }
    }

    cout << ans << "\n";
}

signed main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}