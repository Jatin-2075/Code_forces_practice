#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 1), pref(n + 1, 0);

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        long long totalSum = pref[n];

        while(q--) {
            long long l, r, k;
            cin >> l >> r >> k;

            long long rangeSum = pref[r] - pref[l - 1];
            long long newRangeSum = (r - l + 1) * k;

            long long newTotal = totalSum - rangeSum + newRangeSum;

            if(newTotal % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
