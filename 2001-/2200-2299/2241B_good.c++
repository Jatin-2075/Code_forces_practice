#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int length = s.size();

    int y = 1;
    for (int i = 0; i < length; i++) {
        y *= 10;
    }

    y += 1;

    cout << y << '\n';
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