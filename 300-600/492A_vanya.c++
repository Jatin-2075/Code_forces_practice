#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    vector<int> nums;

    cin >> n >> l;

    for(int i = 0; i < n; i++){
        int h;
        cin >> h;
        nums.push_back(h);
    }

    sort(nums.begin(), nums.end());
    float ans = 0;

    for(int u = 0; u < nums.size() - 1; u++){
        float y = nums[u + 1] - nums[u];
        y = y / 2;
        ans = max(y, ans);
    }

    ans = max(ans, (float)nums[0]);
    ans = max(ans, (float)l - nums.back());

    cout << fixed << setprecision(10) << ans;
}
