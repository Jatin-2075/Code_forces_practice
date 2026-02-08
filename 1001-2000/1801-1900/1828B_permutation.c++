#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        int n, ans = 0;
        cin >> n;

        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            int d = abs(a - (i+1));
            ans = __gcd(d, ans);
        }
        cout << ans << "\n";
    }
}