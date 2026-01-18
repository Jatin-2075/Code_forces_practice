#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<long long> ans;

    while (t--) {
        long long n;
        cin >> n;
        for (int k = 2; k <= 60; k++) {
            long long sum = (1LL << k) - 1;

            if (sum > n) break;

            if (n % sum == 0) {
                ans.push_back(n / sum);
                break;
            }
        }
    }

    for(auto i : ans) cout << i << endl;
}
