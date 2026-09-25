#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;

    ll pref = 0;

    for (int i = 0; i < n; i++) {
        pref += b[i] - a[i];

        if (pref < 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}