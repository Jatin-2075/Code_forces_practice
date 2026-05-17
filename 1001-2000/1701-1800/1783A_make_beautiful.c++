#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        
        bool allEqual = true;
        for(int i = 1; i < n; i++)
            if(a[i] != a[0]) { allEqual = false; break; }
        
        if(allEqual) {
            cout << "NO\n";
            continue;
        }
        
        sort(a.begin(), a.end());
        int largest = a[n-1];
        vector<int> ans;
        ans.push_back(largest);
        for(int i = 0; i < n-1; i++) ans.push_back(a[i]);
        
        cout << "YES\n";
        for(int i = 0; i < n; i++) cout << ans[i] << " \n"[i==n-1];
    }
}