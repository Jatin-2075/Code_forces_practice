#include <bits/stdc++.h>
using namespace std;

bool check(int X, int n, const vector<int>& a, const vector<int>& b) {
    int n2 = 0;
    int z = 0;
    bool has_zero = false;

    for (int i = 0; i < n; ++i) {
        int c = (a[i] >= X) + (b[i] >= X);
        
        if (c == 2) {
            n2++;
            if (has_zero) {
                z++;
                has_zero = false;
            }
        } else if (c == 0) {
            has_zero = true;
        }
    }
    
    if (has_zero) {
        z++;
    }

    return n2 > z;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    int low = 1, high = 2 * n;
    int ans = 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (check(mid, n, a, b)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}