#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int,int>> a;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            a.push_back({x, i});
        }

        sort(a.rbegin(), a.rend());

        vector<int> pos(n + 1);
        pos[0] = 0;

        int right = 1, left = -1;
        int ans = 0;

        for (int i = 0; i < n; i++) {

            int val = a[i].first;
            int idx = a[i].second;

            if (i % 2 == 0) {
                pos[idx] = right;
                ans += 2LL * abs(right) * val;
                right++;
            }
            else {
                pos[idx] = left;
                ans += 2LL * abs(left) * val;
                left--;
            }
        }

        cout << ans << "\n";

        for (int i = 0; i <= n; i++) {
            cout << pos[i] << " ";
        }

        cout << "\n";
    }
}