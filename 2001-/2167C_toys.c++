#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        if(nums[i] % 2 == 0)even++;
        else odd++;
    }

    if(even >=1 && odd >= 1){
        sort(nums.begin(), nums.end());
    }

    for(auto i : nums)cout << i << " ";
    cout << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}