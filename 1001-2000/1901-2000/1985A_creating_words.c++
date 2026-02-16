#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        string a, b;
        cin >> a >> b;
        string c = a.substr(1, 2), d = b.substr(1, 2);
        string ans = b[0] + c + " " + a[0] + d;
        cout << ans << "\n";
    }
}