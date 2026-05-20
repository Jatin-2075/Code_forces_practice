#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int ans = 1;
        
        for(int i = 0; i < n-1; i++) {
            ans++;
            if(s[i]=='R' && s[i+1]=='L') break;
        }
        
        cout << ans << endl;
    }
}