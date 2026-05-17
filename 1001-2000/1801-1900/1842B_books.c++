#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int>a(n), b(n), c(n);

    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    for (int &i : c) cin >> i;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if ( (a[i] | x) == x ) {
            ans |= a[i];
        }
        else break;
    }

    for (int i = 0; i < n; i++) {
        if ( (b[i] | x) == x ) {
            ans |= b[i];
        }
        else break;
    }

    for (int i = 0; i < n; i++) {
        if ( (c[i] | x) == x ) {
            ans |= c[i];
        }
        else break;
    }

    cout << (ans == x ? "Yes" : "No") << "\n";
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