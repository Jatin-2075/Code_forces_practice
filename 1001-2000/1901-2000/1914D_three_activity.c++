#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
        vector<pair<int,int>> a(n), b(n), c(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i].first;
            b[i].second = i;
        }
        for(int i = 0; i < n; i++) {
            cin >> c[i].first;
            c[i].second = i;
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());

        long long ans = 0;

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                for(int k = 0; k < 3; k++) {
                    int x = a[i].second;
                    int y = b[j].second;
                    int z = c[k].second;

                    if(x != y && y != z && x != z) {
                        ans = max(ans, 
                                  1LL * a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }

        cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}