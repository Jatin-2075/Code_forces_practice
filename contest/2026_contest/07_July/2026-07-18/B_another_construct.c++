#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k, m;
    cin >> n >> k >> m;

    if (k > m) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    for (int i = 1; i <= n; i++) {
        if (i % k == 0)
            cout << m - k + 1;
        else
            cout << 1;

        if (i != n) cout << " ";
    }
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}