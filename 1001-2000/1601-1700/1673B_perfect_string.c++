#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    bool present[26] = {};
    int k = 0;

    for (char c : s) {
        if (!present[c - 'a']) {
            present[c - 'a'] = true;
            k++;
        }
    }

    for (int i = 0; i + k <= s.size(); i++) {
        bool seen[26] = {};

        for (int j = i; j < i + k; j++) {
            int x = s[j] - 'a';

            if (seen[x]) {
                cout << "NO\n";
                return;
            }

            seen[x] = true;
        }
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