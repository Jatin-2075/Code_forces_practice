#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 2) {
        cout << "2 1\n";
        return;
    }

    cout << 2 << " ";
    for (int i = n; i >= 3; i--) {
        cout << i << " ";
    }
    cout << 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}