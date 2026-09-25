#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        string s;
        cin >> s;

        int N = 2 * n;

        bool allOne = true;
        for (char c : s) {
            if (c == '0') {
                allOne = false;
                break;
            }
        }

        if (allOne) {
            cout << n << " " << n << '\n';
            continue;
        }

        int red = 0, blue = 0;

        for (int i = 0; i < N; i++) {
            int nxt = (i + 1) % N;

            if (s[i] == '1') {
                if (s[nxt] == '0') {
                    if (i % 2 == 0)
                        red++;
                    else
                        blue++;
                }
                else {
                    if (nxt % 2 == 0)
                        red++;
                    else
                        blue++;
                }
            }
        }

        cout << red << " " << blue << '\n';
    }

    return 0;
}