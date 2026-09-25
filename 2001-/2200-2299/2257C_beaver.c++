#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n + 1);

    for (int i = 2; i <= n; i++)
        cin >> p[i];

    int m;
    cin >> m;

    vector<int> a(m);

    for (int &x : a)
        cin >> x;

    cout << m - 1;

    if (find(a.begin(), a.end(), 1) != a.end()) {
        for (int x : a) {
            if (x != 1)
                cout << ' ' << x;
        }
    }
    else {
        int skip = *min_element(a.begin(), a.end());

        for (int x : a) {
            if (x != skip)
                cout << ' ' << x;
        }
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}