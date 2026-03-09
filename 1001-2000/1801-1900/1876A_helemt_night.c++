#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        long long n, p;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<pair<long long,long long>> nums;
        for(int i = 0; i < n; i++) {
            nums.push_back({b[i], a[i]});
        }

        sort(nums.begin(), nums.end());

        long long uttar = p;
        long long bachehue = n - 1;

        for(int i = 0; i < n && bachehue > 0; i++) {
            long long cost = nums[i].first;
            long long cap  = nums[i].second;

            if(cost >= p) break;

            long long use = min(cap, bachehue);
            uttar += use * cost;
            bachehue -= use;
        }

        uttar += bachehue * p;

        cout << uttar << "\n";
    }

    return 0;
}