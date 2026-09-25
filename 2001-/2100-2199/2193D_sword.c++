#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int h = 0;
    ll sum = 0, ans = 0;

    sort(a.begin(), a.end(), greater<ll>());

    for (int i = 0; i < n; i++) {

        while (h < n && sum + b[h] <= i + 1) {
            sum += b[h];
            h++;
        }

        ans = max(ans, a[i] * 1LL * h);
    }

    cout << ans << endl;
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