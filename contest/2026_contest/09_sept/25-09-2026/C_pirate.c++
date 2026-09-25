#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, x;
    cin >> n >> x;

    map<int, ll> fq;

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        fq[v] += v;
    }

    map<int, ll> sum;

    for (auto &[v, total] : fq) {
        int g = gcd(v, x);

        for (int d = 2; d * d <= g; d++) {
            if (g % d == 0) {
                sum[d] += total;

                if (d * d != g) sum[g / d] += total;
            }
        }

        if (g > 1)
            sum[g] += total;
    }

    ll ans = 0;

    for (auto &[d, total] : sum)
        ans = max(ans, total);

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}