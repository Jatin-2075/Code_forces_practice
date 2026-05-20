#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXA = 1000005;
int last_seen[MAXA];
int timer = 0;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<vector<int>> effective_blogs(n);

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        vector<int> a(l);
        for (int j = 0; j < l; j++) cin >> a[j];

        timer++; 
        for (int j = l - 1; j >= 0; j--) {
            if (last_seen[a[j]] != timer) {
                last_seen[a[j]] = timer;
                effective_blogs[i].push_back(a[j]);
            }
        }
    }

    sort(effective_blogs.begin(), effective_blogs.end());

    vector<int> result;
    timer++;
    for (int i = 0; i < n; i++) {
        for (int user : effective_blogs[i]) {
            if (last_seen[user] != timer) {
                last_seen[user] = timer;
                result.push_back(user);
            }
        }
    }
    for (int i = 0; i < (int)result.size(); i++) {
        cout << result[i] << (i == (int)result.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}