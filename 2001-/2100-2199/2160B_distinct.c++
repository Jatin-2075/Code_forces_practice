#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<ll> b(n + 1), a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    for (int i = 1; i <= n; i++) {
        ll d = b[i] - b[i - 1];

        if (d == i) {
            a[i] = i;
        } else {
            a[i] = a[i - d];
        }
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}