#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int minX = 31;

        while (q--) {
            int x;
            cin >> x;

            if (x >= minX) continue;

            for (int i = 0; i < n; i++) {
                if (a[i] % (1LL << x) == 0) {
                    a[i] += (1LL << (x - 1));
                }
            }

            minX = x;
        }

        for (auto v : a) cout << v << " ";
        cout << "\n";
    }
}