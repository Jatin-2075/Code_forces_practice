#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;

        long long d = x - 2*y;

        if(d % 3 != 0 || d < 0) {
            cout << "NO\n";
            continue;
        }

        long long k = d / 3;

        if(max(0LL, -y) <= k/2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}