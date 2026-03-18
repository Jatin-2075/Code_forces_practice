#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s = to_string(n);
        int digits = s.size();
        int first_digit = s[0] - '0';

        int ans = (digits - 1) * 9 + first_digit;
        cout << ans << "\n";
    }

    return 0;
}