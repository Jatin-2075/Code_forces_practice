#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for (int b = 19; b >= 0; b--) {
        int len = 1 << b;
        bool inv = false;
        
        for (int s = 0; s < n; s += (len << 1)) {
            if (s + len >= n) {
                continue;
            }
            
            int maxleft = 0;
            for (int i = s; i < s + len; i++) {
                maxleft = max(maxleft, a[i]);
            }
            
            int minright = 2e9; 
            for (int i = s + len; i < min(n, s + (len << 1)); i++) {
                minright = min(minright, a[i]);
            }
            
            if (maxleft > minright) {
                inv = true;
                break;
            }
        }
        
        if (inv) {
            ans = 1 << b;
            break;
        }
    }
    
    cout << ans << "\n";
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