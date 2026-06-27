#include <bits/stdc++.h>
using namespace std;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= 998244353;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % 998244353;
        base = (base * base) % 998244353;
        exp /= 2;
    }
    return res;
}

void solve() {
    long long n, m, r, c;
    cin >> n >> m >> r >> c;

    long long equ = ((n - r + 1) % 998244352) * ((m - c + 1) % 998244352) % 998244352;
    long long tcel = (n % 998244352) * (m % 998244352) % 998244352;

    
    long long freevar = (tcel - equ + 998244352) % 998244352;

    cout << power(2, freevar) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}