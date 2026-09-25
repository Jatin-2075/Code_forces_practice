#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mpp[x]++;
    }

    vector<pair<int, int>> a;

    for (auto [x, cnt] : mpp) a.push_back({x, cnt});

    reverse(a.begin(), a.end());

    vector<int> done(a.size(), 0);

    while (true) {
        int idx = -1;

        for (int i = 0; i < a.size(); i++) {
            if (done[i] < a[i].second) {
                idx = i;
                break;
            }
        }

        if (idx == -1)break;

        int lim = a[idx].second;

        while (done[idx] < a[idx].second) {
            cout << a[idx].first << ' ';
            done[idx]++;
        }

        for (int i = 0; i < a.size(); i++) {
            if (i == idx) continue;

            int canTake = min(a[i].second - done[i],lim - done[i]);

            while (canTake--) {
                cout << a[i].first << ' ';
                done[i]++;
            }
        }
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}