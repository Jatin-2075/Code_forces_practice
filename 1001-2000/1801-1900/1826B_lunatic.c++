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

        for (auto &x : a)
            cin >> x;

        long long ans = 0;

        for (int i = 0; i < n / 2; i++) {
            long long diff = abs(a[i] - a[n - i - 1]);
            ans = gcd(ans, diff);
        }

        cout << ans << '\n';
    }

    return 0;
}