#include <bits/stdc++.h>
using namespace std;

long long xr(long long n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;

    int x = xr(a - 1);

    if (x == b) {
        cout << a << '\n';
    }
    else if ((x ^ b) == a) {
        cout << a + 2 << '\n';
    }
    else {
        cout << a + 1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();
}