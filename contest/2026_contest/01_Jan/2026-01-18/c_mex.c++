#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);

        if(n == 0){
            cout << 0 << endl;
        }
        else {
            for(int i = 0; i < n; i++)cin >> nums[i];
            sort(nums.begin(), nums.end());

            int best = 1, cur = 1;
            for(int i = 1; i < n; i++){
                if(nums[i] == nums[i-1]) continue;
                else if(nums[i] == nums[i-1] + 1 ) cur++;
                else cur = 1;

                best = max(best, cur);
            }
            cout << best << endl;
        }
    }
}