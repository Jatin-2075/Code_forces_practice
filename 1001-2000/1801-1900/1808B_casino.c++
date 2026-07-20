#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, n;
    cin >> k >> n;

    vector<vector<long long>> nums(k, vector<long long>(n));

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++)
            cin >> nums[i][j];
    }

    long long ans = 0;

    for (int col = 0; col < n; col++) {
        vector<long long> temp;

        for (int row = 0; row < k; row++)
            temp.push_back(nums[row][col]);

        sort(temp.begin(), temp.end());

        for (int i = 0; i < k; i++) {
            ans += temp[i] * i;
            ans -= temp[i] * (k - i - 1);
        }
    }

    cout << ans << '\n';
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