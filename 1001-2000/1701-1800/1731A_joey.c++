#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long product = 1;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            product *= x;
        }

        cout << 2022LL * (product + n - 1) << '\n';
    }

    return 0;
}