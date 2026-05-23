#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<long long> test = nums;
    sort(test.begin(), test.end());

    if(test == nums){
        cout << "YES\n";
    }
    else {

        long long K = 0;
        long long maxweneed = nums[0];

        for(int i = 1; i < n; i++) {
            if (maxweneed > nums[i]) {
                K = max(K, maxweneed - nums[i]);
            }
            maxweneed = max(maxweneed, nums[i]);
        }

        long long prev = nums[0];
        bool possi = true;
        
        for(int i = 1; i < n; i++) {
            if (nums[i] >= prev) {
                prev = nums[i];
            } 
            
            else if (nums[i] + K >= prev) {
                prev = nums[i] + K;
            } 
            
            else {
                possi = false;
                break;
            }
        }

        if(possi) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
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