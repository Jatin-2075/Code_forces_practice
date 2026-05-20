#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    bool allsame = true;

    for (char ch : s) {
        if (ch != c) {
            allsame = false;
            break;
        }
    }

    if (allsame) {
        cout << 0 << "\n";
        return;
    }

    for (int x = 1; x <= n; x++) {

        bool ok = true;

        for (int multiple = x; multiple <= n; multiple += x) {

            if (s[multiple - 1] != c) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << 1 << "\n";
            cout << x << "\n";
            return;
        }
    }

    cout << 2 << "\n";
    cout << n << " " << n - 1 << "\n";
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