#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n + 1);
    vector<int> pos(n + 1);
    
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    int count_A = 0;
    int count_B = 0;
    int max_chairs = 0;

    for (int M = 1; M <= n; M++) {
        if (p[M] <= M) {
            count_A++;
        }
        if (p[M] > M) {
            count_B++;
        }
        
        if (pos[M] < M) {
            count_B--;
        }

        max_chairs = max(max_chairs, count_A + count_B);
    }

    cout << max_chairs << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}