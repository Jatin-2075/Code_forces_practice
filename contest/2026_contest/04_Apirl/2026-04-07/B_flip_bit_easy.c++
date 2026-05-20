#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n + 2); 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int p;
    cin >> p; 
    
    a[0] = a[p];
    a[n + 1] = a[p];
    int lside = 0;
    for (int i = 1; i <= p; i++) {
        if (a[i - 1] != a[i]) {
            lside++;
        }
    }
    int rside = 0;
    for (int i = p; i <= n; i++) {
        if (a[i] != a[i + 1]) {
            rside++;
        }
    }
    
    cout << max(lside, rside) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}