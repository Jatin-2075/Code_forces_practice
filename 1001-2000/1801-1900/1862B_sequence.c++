#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> a;

    for (int i = 0; i < n - 1; i++) {
        a.push_back(b[i]);

        if (b[i] > b[i + 1]) {
            a.push_back(1);
        }
    }

    a.push_back(b[n - 1]);

    cout << a.size() << "\n";

    for (auto x : a) {
        cout << x << " ";
    }

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}