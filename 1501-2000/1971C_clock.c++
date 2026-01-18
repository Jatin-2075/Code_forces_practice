#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int mx = max(a , b);
        int mn = min(a , b);

        bool c_inside = ( mx > c && mn < c);
        bool d_inside = ( mx > d && mn < d);

        if(c_inside ^ d_inside){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}