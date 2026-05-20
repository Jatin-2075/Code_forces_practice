#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long need = d - b;

        if (need < 0) {
            cout << -1 << '\n';
            continue;
        }

        long long x = a + need;

        if (x < c) {
            cout << -1 << '\n';
            continue;
        }

        cout << need + (x - c) << '\n';
    }
}