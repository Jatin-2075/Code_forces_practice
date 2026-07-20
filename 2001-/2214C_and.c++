#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> nums(3);

    for (int i = 0; i < 3; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    cout << (nums[0] ^ nums[1] ^ nums[2]) - nums[1] << "\n";
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