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

        long long L = a[0] - x;
        long long R = a[0] + x;

        int changes = 0;

        for (int i = 1; i < n; i++) {
            long long l = a[i] - x;
            long long r = a[i] + x;

            L = max(L, l);
            R = min(R, r);

            if (L > R) {
                changes++;
                L = l;
                R = r;
            }
        }

        cout << changes << "\n";
    }
}