#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> nums;
    int count = 1,ans = 1;

    while(n--){
        int i;
        cin >> i;

        nums.push_back(i);
    }

    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] <= nums[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        ans = max(ans, count);
    }

    cout << ans;
}