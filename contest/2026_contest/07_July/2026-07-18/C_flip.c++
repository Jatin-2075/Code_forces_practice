#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    int ones_a = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            ones_a++;
        }
    }
    
    int zeros_b = 0;
    bool same = true;
    int y = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] == 0) {
            zeros_b++;
        }
        if (a[i] != b[i]) {
            same = false;
        }
        if (a[i] == 1 && b[i] == 0) {
            y++;
        }
    }
    
    if (same) {
        cout << 0 << "\n";
        return;
    }
    
    if (ones_a == 0 || zeros_b == 0) {
        cout << -1 << "\n";
        return;
    }
    
    if (y % 2 != 0) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}