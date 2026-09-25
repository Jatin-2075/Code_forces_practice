#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long total = 0;

        for (auto &x : a) {
            cin >> x;
            total += x;
        }

        long long prefix = 0;
        long long ans = 0;

        for (int i = 0; i < n - 1; i++) {
            prefix += a[i];

            long long suffix = total - prefix;

            ans = max(ans, gcd(prefix, suffix));
        }

        cout << ans << '\n';
    }

    return 0;
}