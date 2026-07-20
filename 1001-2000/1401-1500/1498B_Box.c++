#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, W;
    cin >> n >> W;

    multiset<int, greater<int>> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int ans = 0;

    while (!s.empty()) {
        int rem = W;

        while (true) {
            auto it = s.lower_bound(rem);

            if (it == s.end())
                break;

            rem -= *it;
            s.erase(it);
        }

        ans++;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}