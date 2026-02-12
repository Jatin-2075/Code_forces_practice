#include <iostream>

using namespace std;

void solve() {
    long long p, q;
    if (!(cin >> p >> q)) return;

    if (3 * p == 2 * q) {
        cout << "Bob\n";
        return;
    }
    if (3 * p < 2 * q) {
        cout << "Alice\n";
        return;
    }

    long long term1 = (3 * (p % 5)) % 5;
    long long term2 = (2 * (q % 5)) % 5;
    long long rem = (term1 - term2 + 5) % 5;
    if (rem == 1 || rem == 2) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}