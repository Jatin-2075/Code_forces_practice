#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    vector<int> nums(12);

    for (int i = 0; i < 12; i++)
        cin >> nums[i];
    sort(nums.begin(), nums.end(), greater<int>());

    int sum = 0, cnt = 0;

    for (int i = 0; i < 12; i++)
    {
        if (sum >= k)
            break;
        sum += nums[i];
        cnt++;
    }

    if (sum >= k)
        cout << cnt;
    else
        cout << -1;
}