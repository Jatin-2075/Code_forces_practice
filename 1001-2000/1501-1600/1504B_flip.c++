#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    vector<bool> good(n, false);

    int zero = 0, one = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == '0') zero++;
        else one++;

        if (zero == one) {
            good[i] = true;
        }
    }

    bool flipped = false;

    for (int i = n - 1; i >= 0; i--) {

        char cur = a[i];

        if (flipped) {
            cur = (cur == '0' ? '1' : '0');
        }

        if (cur == b[i]) continue;

        if (!good[i]) {
            cout << "NO\n";
            return;
        }

        flipped = !flipped;
    }

    cout << "YES\n";
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