#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

bool feasible(int64 s_in, int64 m, int64 n) {
    long long s = s_in;
    for (int b = 60; b >= 0 && s > 0; --b) {
        if ((m >> b) & 1LL) {
            long long val = (long long)1 << b;
            long long take = s / val;
            if (take > n) take = n;
            s -= take * val;
        }
    }
    return s == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int64 s, m;
        cin >> s >> m;
        if (m == 0) {
            cout << (s == 0 ? 0 : -1) << '\n';
            continue;
        }
        int64 lowbit = m & -m;
        if (s % lowbit != 0) {
            cout << -1 << '\n';
            continue;
        }
        int64 lo = 1, hi = s, ans = -1;
        while (lo <= hi) {
            int64 mid = lo + (hi - lo) / 2;
            if (feasible(s, m, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
