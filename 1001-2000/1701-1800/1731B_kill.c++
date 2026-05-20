#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 1e9 + 7;
const int INV6 = 166666668;

void solve() {
    int n;
    cin >> n;

    n %= MOD;

    int ans = n * (n + 1) % MOD;
    ans = ans * (4 * n - 1) % MOD;
    ans = ans * INV6 % MOD;

    ans = ans * 2022 % MOD;

    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();
}