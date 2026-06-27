#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> pos(k + 1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x].push_back(i);
    }

    int ans = INT_MAX;

    for (int c = 1; c <= k; c++) {

        int last = 0;
        int mx1 = 0, mx2 = 0;

        for (int x : pos[c]) {

            int gap = x - last - 1;

            if (gap >= mx1) {
                mx2 = mx1;
                mx1 = gap;
            }
            else if (gap > mx2) {
                mx2 = gap;
            }

            last = x;
        }

        int gap = n - last;

        if (gap >= mx1) {
            mx2 = mx1;
            mx1 = gap;
        }
        else if (gap > mx2) {
            mx2 = gap;
        }

        ans = min(ans, max(mx2, mx1 / 2));
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}