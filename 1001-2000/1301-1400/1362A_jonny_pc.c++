#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0 << "\n";
        return;
    }

    long long big = max(a, b);
    long long small = min(a, b);

    if (big % small != 0) {
        cout << -1 << "\n";
        return;
    }

    long long x = big / small;

    int cnt = 0;

    while (x % 2 == 0) {
        x /= 2;
        cnt++;
    }

    if (x != 1) {
        cout << -1 << "\n";
        return;
    }

    cout << (cnt + 2) / 3 << "\n";
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