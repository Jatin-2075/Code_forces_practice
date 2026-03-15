#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long ans = 1;

        for (int i = n - 1; i >= 0; i--) {
            int count = a.end() - upper_bound(a.begin(), a.end(), b[i]);
            ans = (ans * max(0, count - (n - 1 - i))) % MOD;
        }

        cout << ans << "\n";
    }
}