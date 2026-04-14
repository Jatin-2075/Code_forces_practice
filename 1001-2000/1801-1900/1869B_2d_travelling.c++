#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<pair<ll,ll>> city(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> city[i].first >> city[i].second;
        }

        auto dist = [&](int i, int j) {
            return abs(city[i].first - city[j].first) +
                   abs(city[i].second - city[j].second);
        };

        ll direct = dist(a, b);

        if(k == 0) {
            cout << direct << "\n";
            continue;
        }

        ll da = LLONG_MAX, db = LLONG_MAX;

        for(int i = 1; i <= k; i++) {
            da = min(da, dist(a, i));
            db = min(db, dist(b, i));
        }

        cout << min(direct, da + db) << "\n";
    }
}