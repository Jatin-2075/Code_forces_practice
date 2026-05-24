#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<long long> a(n), b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long long ans = 0;
    long long maximum = 0;

    for(int i = 0; i < n; i++) {

        ans += max(a[i], b[i]);

        maximum = max(maximum, min(a[i], b[i]));
    }

    cout << ans + maximum << '\n';
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}