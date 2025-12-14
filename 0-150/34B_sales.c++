#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, carried = 0, ans = 0;
    vector<int> nums;

    cin >> n >> m;

    while(n--){
        int a;
        cin >> a;
        nums.push_back(a);
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0 && carried < m){
            carried++;
            ans += abs(nums[i]);
        }
    }
    cout << ans;
}