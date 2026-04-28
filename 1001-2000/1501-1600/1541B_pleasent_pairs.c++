#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1), pos(2 * n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            for (int k = a[i]; k <= 2 * n; k += a[i]) {
                int y = k / a[i];

                if (y > 2 * n) continue;
                if (pos[y] == 0) continue;

                int j = pos[y];

                if (j > i && a[i] * y == i + j) {
                    ans++;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}