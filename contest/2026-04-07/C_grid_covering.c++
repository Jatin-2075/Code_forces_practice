#include <bits/stdc++.h>
using namespace std;

long long custom_gcd(long long x, long long y) {
    while (y) {
        x %= y;
        swap(x, y);
    }
    return x;
}

void solve() {
    long long n, m, a, b;
    if (!(cin >> n >> m >> a >> b)) return;

    if (custom_gcd(a, n) == 1 && custom_gcd(b, m) == 1 && custom_gcd(n, m) <= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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