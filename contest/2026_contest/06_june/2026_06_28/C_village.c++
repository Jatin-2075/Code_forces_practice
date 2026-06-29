#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n + 1);
    vector<vector<int>> child(n + 1);
    vector<int> dept(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        cin >> p[i];
        child[p[i]].push_back(i);
        dept[i] = dept[p[i]] + 1;
    }

    vector<int> maxdept(n + 1, 0);
    
    for (int i = n; i >= 1; i--) {
        maxdept[i] = dept[i];
        for (int c : child[i]) {
            maxdept[i] = max(maxdept[i], maxdept[c]);
        }
    }

    long long ans = n;

    for (int i = 1; i <= n; i++) {
        if (child[i].size() >= 2) {
            int maxone = -1, maxtwo = -1;
            
            for (int c : child[i]) {
                int md = maxdept[c];
                if (md > maxone) {
                    maxtwo = maxone;
                    maxone = md;
                } else if (md > maxtwo) {
                    maxtwo = md;
                }
            }
            
            ans += (maxtwo - dept[i]); 
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}