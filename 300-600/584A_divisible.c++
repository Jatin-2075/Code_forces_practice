#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    if (n == 1) {
        if (t < 10) cout << t;
        else cout << -1;
        return 0;
    }

    string s(n, '1');

    for (char d = '0'; d <= '9'; d++) {
        s[n - 1] = d;

        int mod = 0;
        for (char c : s) {
            mod = (mod * 10 + (c - '0')) % t;
        }

        if (mod == 0 && s[0] != '0') {
            cout << s;
            return 0;
        }
    }

    cout << -1;
}
 