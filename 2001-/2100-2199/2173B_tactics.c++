#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long mx = 0, mn = 0;

    for (int i = 0; i < n; i++) {
        cin >> b[i];

        long long newMx = max(mx - a[i], b[i] - mn);
        long long newMn = min(mn - a[i], b[i] - mx);

        mx = newMx;
        mn = newMn;
    }

cout << mx << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}