#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> cost(n);

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;

            cost[i] = a + (i + 1);
        }

        sort(cost.begin(), cost.end());

        int ans = 0;

        for (long long x : cost) {
            if (x > c)
                break;

            c -= x;
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}