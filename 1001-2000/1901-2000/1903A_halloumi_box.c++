#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> nums(n);
        for(int i = 0; i < n ; i++)cin >> nums[i];
        vector<long long> ans = nums;
        sort(ans.begin(), ans.end());
        if(k >= 2 || ans == nums)cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

}