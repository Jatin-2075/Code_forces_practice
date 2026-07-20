#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int k = n / 2;
    vector<int> p(k);

    for (int i = 0; i < k; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    int black = 0, white = 0;

    for (int i = 0; i < k; i++) {
        black += abs(p[i] - (2 * i + 1));
        white += abs(p[i] - (2 * i + 2));
    }

    cout << min(black, white) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}