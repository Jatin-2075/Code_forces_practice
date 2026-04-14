#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long m;
    cin >> n >> m;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (m > n) {
        cout << "YES\n";
        return;
    }

    int max_consecutive = 1;
    int current_consecutive = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            current_consecutive++;
            max_consecutive = max(max_consecutive, current_consecutive);
        } else {
            current_consecutive = 1;
        }
    }

    if (max_consecutive >= m) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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