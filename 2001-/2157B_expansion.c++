#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;

        string s;
        cin >> s;

        long long c4 = 0, c8 = 0;
        for(char ch : s){
            if(ch == '4') c4++;
            else c8++;
        }

        long long d4 = llabs(x) + llabs(y);
        long long d8 = max(llabs(x), llabs(y));

        if(d8 <= c8 + c4 && d4 <= c4 + 2*c8)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
