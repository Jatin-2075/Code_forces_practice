#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        long long x, y;
        cin >> x >> y;

        long long k = y / x;

        if(k <= 2) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}