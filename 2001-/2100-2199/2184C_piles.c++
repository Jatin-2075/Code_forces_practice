#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    long long p = 1;
    long long ans = -1;

    for(int d = 0; d <= 31; d++){
        long long x = n / p;
        long long y = (n + p - 1) / p;

        if(x == k || y == k){
            ans = d;
            break;
        }
        p *= 2;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}