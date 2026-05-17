#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n, m;
        cin >> n >> m;

        int sum = 0;
        int neg = 0;
        int mn = 1e18;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                int x;
                cin >> x;

                if (x < 0) neg++;

                sum += abs(x);

                mn = min(mn, abs(x));
            }
        }

        if (neg % 2 == 1)
            sum -= 2 * mn;

        cout << sum << "\n";
    }
}