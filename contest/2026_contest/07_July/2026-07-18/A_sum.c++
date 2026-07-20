#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1)
            cnt++;
    }

    if (n % 2) {
        cout << "NO\n";
        return;
    }

    if ((cnt % 2) == ((n / 2) % 2))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}