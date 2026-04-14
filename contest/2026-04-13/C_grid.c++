#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long p, q;
    cin >> p >> q;

    long long K = 2 * p + 4 * q + 1;
    long long ans_n = -1, ans_m = -1;

    for (long long A = 3; A * A <= K; A += 2) {
        if (K % A == 0) {
            long long B = K / A;
            
            long long n = (A - 1) / 2;
            long long m = (B - 1) / 2;

            long long horizontal_segments = m * (n + 1);
            long long vertical_segments = n * (m + 1);

            if (q <= min(horizontal_segments, vertical_segments)) {
                ans_n = n;
                ans_m = m;
                break;
            }
        }
    }

    if (ans_n != -1) {
        cout << ans_n << " " << ans_m << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}