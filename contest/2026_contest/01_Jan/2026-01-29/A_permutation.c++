#include <bits/stdc++.h>
using namespace std;

bool build(int i, int n, vector<int>& p, vector<bool>& used) {
    if (i == 0) return true;

    int nxt = p[i + 1];
    int a = nxt + i;
    int b = nxt - i;

    if (a >= 1 && a <= n && !used[a]) {
        used[a] = true;
        p[i] = a;
        if (build(i - 1, n, p, used)) return true;
        used[a] = false;
    }

    if (b >= 1 && b <= n && !used[b]) {
        used[b] = true;
        p[i] = b;
        if (build(i - 1, n, p, used)) return true;
        used[b] = false;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 2);
        vector<bool> used(n + 1, false);

        for (int start = 1; start <= n; start++) {
            fill(used.begin(), used.end(), false);
            p[n] = start;
            used[start] = true;

            if (build(n - 1, n, p, used)) {
                for (int i = 1; i <= n; i++) {
                    cout << p[i] << " ";
                }
                cout << "\n";
                break;
            }
        }
    }
    return 0;
}
