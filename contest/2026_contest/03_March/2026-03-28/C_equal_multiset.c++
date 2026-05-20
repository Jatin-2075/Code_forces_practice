#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<bool> allowed(n + 1, false);
    vector<bool> used(n + 1, false);
    
    for (int i = n - k; i < k; i++) {
        allowed[a[i]] = true;
    }

    for (int i = 0; i < n; i++) {
        if (b[i] == -1) continue; 
        if (i < n - k || i >= k) {
            if (b[i] != a[i]) {
                cout << "NO\n";
                return;
            }
        } 
        else {
            if (!allowed[b[i]] || used[b[i]]) {
                cout << "NO\n";
                return;
            }
            used[b[i]] = true;
        }
    }

    cout << "YES\n";
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