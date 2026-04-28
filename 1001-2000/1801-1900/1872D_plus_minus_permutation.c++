#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;

    long long cntx = n / x, cnty = n / y, cntboth = n / lcm(x, y);
    long long k1 = cntx - cntboth, k2 = cnty - cntboth;

    long long summax = k1 * n - (k1 * (k1 - 1)) / 2;
    long long summin = (k2 * (k2 + 1)) / 2;

    cout << summax - summin << "\n";
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