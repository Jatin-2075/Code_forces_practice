#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<long long> s(n);
        for(int i = 0; i < n; i++) cin >> s[i];
 
        vector<int> p(n);
 
        bool ok = true;
 
        for(int i = 0; i < n;) {
 
            int j = i;
 
            while(j < n && s[j] == s[i]) j++;
 
            int len = j - i;
 
            if(len == 1) {
                ok = false;
                break;
            }
 
            for(int k = i; k < j; k++) {
                if(k == j - 1) p[k] = i;
                else p[k] = k + 1;
            }
 
            i = j;
        }
 
        if(!ok) {
            cout << -1 << "\n";
        } else {
            for(int i = 0; i < n; i++) {
                cout << p[i] + 1 << " ";
            }
            cout << "\n";
        }
    }
}