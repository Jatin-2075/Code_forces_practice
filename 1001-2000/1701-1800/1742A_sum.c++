#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;

    vector <string> ans;

    while(k--){
        int a, b, c;
        vector <int> nums;

        cin >> a >> b >> c;

        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);

        sort(nums.begin(), nums.end());

        int j = nums[0] + nums[1];

        if(j == nums[2]){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }

    for(auto i : ans){
        cout << i << endl;
    }
}