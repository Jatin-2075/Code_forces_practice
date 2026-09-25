#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, t;
    cin >> n >> t;

    ll evencnt = 0, oddcnt = 0;
    ll total = 0;

    vector<ll> odd, even;

    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;

        total += a;

        if (i % 2 == 0)
            odd.push_back(a);
        else
            even.push_back(a);
    }

    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;

        if (a % 2 == 0)
            evencnt++;
        else
            oddcnt++;
    }

    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());

    ll marked = 0;

    for (int i = 0; i < min(oddcnt, (ll)odd.size()); i++) {
        if (odd[i] <= 0)
            break;

        marked += odd[i];
    }

    for (int i = 0; i < min(evencnt, (ll)even.size()); i++) {
        if (even[i] <= 0)
            break;

        marked += even[i];
    }

    cout << total - marked << endl;
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