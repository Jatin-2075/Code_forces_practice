#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    long long drinks = (k * l) / (n * nl);
    long long limes = (c * d) / n;
    long long salts = p / (n * np);

    long long ans = min(drinks, min(limes, salts));

    cout << ans;
}
