#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y;
    if (!(cin >> x >> y)) return;

    long long diff = abs(x - y);
    long long count = 0;

    if (diff == 0) {
        count = 1;
    } else {
        for (long long i = 1; i * i <= diff; i++) {
            if (diff % i == 0) {
                count++;
                if (i * i != diff) {
                    count++;
                }
            }
        }
    }

    cout << count % 676767677 << "\n";

    for (int i = 0; i < x; i++) cout << 1 << " ";
    for (int i = 0; i < y; i++) cout << -1 << " ";
    cout << "\n";
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