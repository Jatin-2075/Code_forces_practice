#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    if (n <= 3) {
        cout << 1 << '\n';
        return;
    }

    long long d = abs(x1 - x2);
    d = min(d, n - d);

    long long ans = d + k;

    cout << ans << '\n';
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