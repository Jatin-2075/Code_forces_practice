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
        int mx = 0;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
            mx = max(mx, nums[i]);
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == mx)cnt++;
        }
        cout << cnt << "\n";
    }
}