#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> nums(n);
        for(int i = 0; i < n; i++)cin >> nums[i];
        unordered_map<long long, long long > mpp;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long diff = nums[i] - i;
            ans += mpp[diff];
            mpp[diff]++;
        }
        cout << ans << "\n";
    }
}