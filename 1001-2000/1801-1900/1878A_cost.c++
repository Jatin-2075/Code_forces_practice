#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string ans = "NO";
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a == k) ans = "YES";
        }
        cout << ans << "\n";
    }
} 