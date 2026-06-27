#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    if (total < s) {
        cout << -1 << "\n";
        return;
    }

    if (total == s) {
        cout << 0 << "\n";
        return;
    }

    int l = 0;
    int sum = 0;
    int longest = -1;

    for (int r = 0; r < n; r++) {
        sum += a[r];

        while (sum > s) {
            sum -= a[l++];
        }

        if (sum == s) {
            longest = max(longest, r - l + 1);
        }
    }

    cout << n - longest << "\n";
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