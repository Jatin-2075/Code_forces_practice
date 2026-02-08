#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector <pair<int,int>> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i].first >> nums[i].second;
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        int x = nums[i].first;
        int y = nums[i].second;

        if(s > x){
            s += y;
        }
        else{
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}