#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    int ops = 0;

    while (x.size() <= 100) {
        if (x.find(s) != string::npos) {
            cout << ops << "\n";
            return;
        }
        x += x;
        ops++;
    }

    cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}