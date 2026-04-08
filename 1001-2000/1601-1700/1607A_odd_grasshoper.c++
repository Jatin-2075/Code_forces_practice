#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        long long x0, n;
        cin >> x0 >> n;

        long long mod = n % 4;
        long long sign = (x0 % 2 == 0 ? -1 : 1);
        long long ans;

        if(mod == 0) ans = x0;
        else if(mod == 1) ans = x0 + sign * n;
        else if(mod == 2) ans = x0 - sign * 1;
        else ans = x0 - sign * (n + 1);

        cout << ans << "\n";
    }

    return 0;
}