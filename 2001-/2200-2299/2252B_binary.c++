#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ones = 0, zeros = 0;

    for (char c : s) {
        if (c == '1')
            ones++;
        else
            zeros++;
    }

    if (abs(ones - zeros) > 2) {
        cout << -1 << endl;
        return;
    }

    int del0 = 0, del1 = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            if (s[i] == '0')
                del0++;
            else
                del1++;
        }
    }

    if (abs(del0 - del1) <= 1) {
        cout << del0 + del1 << endl;
    }
    else {
        cout << 2 * max(del0, del1) - 1 << endl;
    }
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