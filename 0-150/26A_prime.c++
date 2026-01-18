#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int ans = 0;

    for (int i = 2; i <= n; i++) {
        int cnt = 0;
        for (int d = 2; d <= i; d++) {
            if (i % d == 0 && isPrime(d)) {
                cnt++;
            }
            if (cnt > 2) break;
        }
        if (cnt == 2) ans++;
    }

    cout << ans << endl;
    return 0;
}
