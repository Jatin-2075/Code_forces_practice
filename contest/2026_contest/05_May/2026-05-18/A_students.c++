#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int grps = n / 3;
    int r = n % 3;

    int ans = grps * min(b, 3 * a) + min(r * a, b);

    cout << ans << '\n';
}

signed main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
}