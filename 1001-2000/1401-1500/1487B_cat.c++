#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    if (n % 2 == 0) {
        int ans = k % n;
        if (ans == 0) ans = n;
        cout << ans << '\n';
    }
    else {
        int shift = (k - 1) / (n / 2);

        int ans = (k + shift) % n;

        if (ans == 0) ans = n;

        cout << ans << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();
}