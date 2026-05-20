#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int neg = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == -1)
            neg++;
    }

    int pos = n - neg;

    int ans = 0;

    while (pos - neg < 0) {
        neg--;
        pos++;
        ans++;
    }

    if (neg % 2)
        ans++;

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