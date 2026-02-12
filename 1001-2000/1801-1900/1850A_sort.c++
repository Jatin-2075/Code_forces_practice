#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> nums(3);
        for(int i = 0; i < 3; i++)cin >> nums[i];
        sort(nums.begin(), nums.end());
        if(nums[2] + nums[1] >= 10){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}