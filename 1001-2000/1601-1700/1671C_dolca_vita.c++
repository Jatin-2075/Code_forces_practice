#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    ll x;
    cin >> n >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<ll> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i - 1] + a[i - 1];

    ll ans = 0;
    ll prevDays = 0;

    for (int i = n; i >= 1; i--) {

        if (prefix[i] > x)
            continue;

        ll days = (x - prefix[i]) / i + 1;

        ans += (days - prevDays) * i;

        prevDays = days;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}