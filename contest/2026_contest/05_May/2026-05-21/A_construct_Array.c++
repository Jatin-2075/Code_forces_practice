#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int m = (n + 1) / 2;
    
    int p1 = 1;
    int p2 = 2 * m + 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << p1 << " ";
            p1 += 2;
        } else {
            cout << p2 << " ";
            p2 += 2;
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}