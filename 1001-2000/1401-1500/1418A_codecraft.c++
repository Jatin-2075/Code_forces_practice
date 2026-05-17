#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    ll need = k * (y + 1) - 1;

    ll trades = (need + (x - 2)) / (x - 1);

    cout << trades + k << "\n";
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