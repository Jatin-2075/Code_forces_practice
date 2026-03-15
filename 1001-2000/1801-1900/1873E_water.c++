#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        vector<long long> a(n);
        for (auto &i : a) cin >> i;

        long long l = 1, r = 1e18, ans = 1;

        while (l <= r) {
            long long mid = (l + r) / 2;

            long long water = 0;
            for (long long i : a) {
                if (i < mid) water += mid - i;
                if (water > x) break;
            }

            if (water <= x) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        cout << ans << "\n";
    }
}