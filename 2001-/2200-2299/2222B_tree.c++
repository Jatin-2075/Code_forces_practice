#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    ll total = 0;
    ll oddcnt = 0, evencnt = 0;

    vector<ll> odd, even;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        total += x;

        if (i % 2 == 0)
            odd.push_back(x);
        else
            even.push_back(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0)
            evencnt++;
        else
            oddcnt++;
    }

    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());

    ll marked = 0;

    int oddTaken = 0;

    for (int i = 0; i < min(oddcnt, (ll)odd.size()); i++) {
        if (odd[i] <= 0)
            break;

        marked += odd[i];
        oddTaken++;
    }

    if (oddcnt > 0 && oddTaken == 0) {
        marked += odd[0];
    }

    int evenTaken = 0;

    for (int i = 0; i < min(evencnt, (ll)even.size()); i++) {
        if (even[i] <= 0)
            break;

        marked += even[i];
        evenTaken++;
    }

    if (evencnt > 0 && evenTaken == 0) {
        marked += even[0];
    }

    cout << total - marked << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}