#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<ll> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<pair<ll, int>> groups;

    for (int i = 0; i < n; i++) {
        if (groups.empty() || groups.back().first != nums[i]) {
            groups.push_back({nums[i], 1});
        } else {
            groups.back().second++;
        }
    }

    int m = groups.size();

    for (int i = 0; i + 1 < m; i++) {
        if (groups[i].second >= 2 && groups[i + 1].second >= 2) {
            cout << min(n, m + 2) << endl;
            return;
        }
    }

    for (int i = 0; i < m; i++) {
        if (groups[i].second < 2) {
            continue;
        }

        if (i + 1 < m && groups[i + 1].second == 1) {
            if (i + 2 == m || groups[i + 2].first != groups[i].first) {
                cout << min(n, m + 1) << endl;
                return;
            }
        }

        if (i > 0 && groups[i - 1].second == 1) {
            if (i - 2 < 0 || groups[i - 2].first != groups[i].first) {
                cout << min(n, m + 1) << endl;
                return;
            }
        }
    }

    cout << m << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TestsNumT;
    cin >> TestsNumT;

    while (TestsNumT--) {
        solve();
    }

    return 0;
}