#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int x = 2;; x++) {
        bool ok = false;

        for (int i = 0; i < n; i++) {
            if (__gcd(a[i], (long long)x) == 1) {
                ok = true;
                break;
            }
        }

        if (ok) {
            cout << x << "\n";
            return;
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}