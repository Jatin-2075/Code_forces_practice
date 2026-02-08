#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long x, n;
        cin >> x >> n;
        long long d = 0;
        if(n % 2 == 0)d = n / 2;
        else d = -(n+1) / 2;
        
        long long ans = 0;
        if(x % 2 == 0) ans = d + x;
        else ans = d - x;
        cout << ans << "\n";
    }
}