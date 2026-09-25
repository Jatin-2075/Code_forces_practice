#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int maxLen = 0;
        int curr = 0;

        for (char c : s) {
            if (c == '#') {
                curr++;
                maxLen = max(maxLen, curr);
            } else {
                curr = 0;
            }
        }

        cout << (maxLen + 1) / 2 << '\n';
    }

    return 0;
}