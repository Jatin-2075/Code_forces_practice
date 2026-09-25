#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> p(n);

    for (int &v : p)
        cin >> v;

    int g = gcd(x, y);

    for (int i = 0; i < n; i++) {
        if (i % g != (p[i] - 1) % g) {
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
}