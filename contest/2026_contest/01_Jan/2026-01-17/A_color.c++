#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        b = a;
        sort(b.begin(), b.end());
        unordered_map<int, int> color;
        for(int i = 0; i < n; i++){
            color[b[i]] = i % 2;
        }
        bool ok = true;
        for(int i = 0; i < n-1; i++){
            if(color[a[i]] == color[a[i+1]]){
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
