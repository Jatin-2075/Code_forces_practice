#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long min_sum = b * k;
        long long max_sum = b * k + n * (k - 1);

        if (s < min_sum || s > max_sum) {
            cout << -1 << "\n";
            continue;
        }

        vector<long long> a(n, 0);

        a[0] = min_sum;
        long long remaining = s - min_sum;

        for (int i = 0; i < n && remaining > 0; i++) {
            long long add = min(remaining, k - 1);
            a[i] += add;
            remaining -= add;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}