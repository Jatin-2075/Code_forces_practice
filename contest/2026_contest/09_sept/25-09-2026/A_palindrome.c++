#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    char x;
    cin >> n;
    cin >> x;

    string s;
    cin >> s;

    string r = s;

    reverse(r.begin(), r.end());

    int coin = 0;

    for (int i = 0; i < n / 2; i++) {
        if (r[i] != s[i]) {
            if (r[i] == x || s[i] == x)
                coin += 1;
            else
                coin += 2;
        }
    }

    cout << coin << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}