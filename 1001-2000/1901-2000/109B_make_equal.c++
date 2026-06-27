#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (long long k = 2; k <= (1LL << 60); k <<= 1) {

        set<long long> s;

        for (auto x : a) {
            s.insert(x % k);
        }

        if (s.size() == 2) {
            cout << k << '\n';
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}