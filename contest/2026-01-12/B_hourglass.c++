#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long s, k, m;
    cin >> s >> k >> m;

    long long initial_sand;
    if (m < k) {
        initial_sand = s;
    } else {
        initial_sand = min(s, k);
    }

    long long elapsed_in_cycle = m % k;
    long long remaining = initial_sand - elapsed_in_cycle;

    cout << max(0LL, remaining) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}