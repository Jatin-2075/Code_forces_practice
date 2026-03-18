#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        int total2 = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2) total2++;
        }
        
        int prefix2 = 0;
        bool found = false;
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2) prefix2++;
            
            if (prefix2 == total2 - prefix2) {
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }
        
        if (!found) cout << -1 << endl;
    }
    
    return 0;
}