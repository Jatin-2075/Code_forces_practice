#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(m);

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> gaps;

    for (int i = 0; i < m - 1; i++) {
        int gap = a[i + 1] - a[i] - 1;

        if (gap > 0) {
            gaps.push_back(gap);
        }
    }

    int lastGap = (a[0] + n - a[m - 1] - 1);

    if (lastGap > 0) {
        gaps.push_back(lastGap);
    }

    sort(gaps.rbegin(), gaps.rend());

    int days = 0;
    int saved = 0;

    for (int gap : gaps) {

        int remaining = gap - 2 * days;

        if (remaining <= 0) {
            continue;
        }

        if (remaining == 1) {
            saved += 1;
            days += 1;
        }
        else {
            saved += remaining - 1;
            days += 2;
        }
    }

    cout << n - saved << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}