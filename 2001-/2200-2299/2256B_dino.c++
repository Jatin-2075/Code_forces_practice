#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = 1;

    for (int p = 0; p < 2; p++) {
        int ways = 0;

        bool ok0 = true;
        int expected = 0;

        for (int i = p; i < n; i += 2) {
            if (s[i] != '?' && s[i] - '0' != expected)
                ok0 = false;

            expected ^= 1;
        }

        bool ok1 = true;
        expected = 1;

        for (int i = p; i < n; i += 2) {
            if (s[i] != '?' && s[i] - '0' != expected)
                ok1 = false;

            expected ^= 1;
        }

        ways = ok0 + ok1;

        ans *= ways;
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