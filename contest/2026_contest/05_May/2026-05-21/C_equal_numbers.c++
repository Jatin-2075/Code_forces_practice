#include <bits/stdc++.h>
using namespace std;

#define int long long

const int INF = 1e18;

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<pair<int, int>> paths;
    paths.reserve(n * 65); 

    for(int i = 0; i < n; i++) {
        int x = nums[i];
        int c = 0;
        
        if (x == 1) {
            paths.push_back({1, 0});
            paths.push_back({2, 1});
            continue;
        }
        
        while(true) {
            paths.push_back({x, c});
            
            if(x == 1) break;
            
            if(x % 2 == 0) {
                x /= 2;
            } else {
                x += 1;
            }
            c++;
        }
    }

    sort(paths.begin(), paths.end());

    int ans = INF;
    int m = paths.size();

    for(int i = 0; i < m; ) {
        int j = i;
        int current_val = paths[i].first;
        int total_cost = 0;
        int count = 0;

        while(j < m && paths[j].first == current_val) {
            total_cost += paths[j].second;
            count++;
            j++;
        }

        if(count == n) {
            ans = min(ans, total_cost);
        }

        i = j;
    }

    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while(t--) {
            solve();
        }
    }

    return 0;
}