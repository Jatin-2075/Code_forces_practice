#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m, l;
        cin >> n >> m >> l;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long ans = l;

        long long lo = 0, hi = l;

        while (lo <= hi) {
            long long x = (lo + hi) / 2;

            long long need = 0;
            long long last = l;

            for (int i = n - 1; i >= 0; i--) {
                long long gap = last - a[i];
                need += gap / (x + 1);
                last = a[i];
            }

            need += last / (x + 1);

            if (need <= m) {
                ans = x;
                hi = x - 1;
            } else {
                lo = x + 1;
            }
        }

        cout << ans << "\n";
    }
}