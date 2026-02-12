#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b;
    if (n > 0) b.push_back(a[0]);
    for(int i = 1; i < n; i++) {
        if(a[i] != a[i-1]) {
            b.push_back(a[i]);
        }
    }

    int p_index = 0;
    int b_index = 0;
    
    while(p_index < n && b_index < b.size()) {
        if(p[p_index] == b[b_index]) {
            b_index++; 
        }
        p_index++;
    }

    if(b_index == b.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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