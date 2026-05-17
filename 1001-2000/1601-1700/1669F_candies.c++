#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0, r = n - 1;

        long long sumL = 0, sumR = 0;

        int ans = 0;

        while (l <= r) {

            if (sumL <= sumR) {
                sumL += a[l];
                l++;
            }
            else {
                sumR += a[r];
                r--;
            }

            if (sumL == sumR) {
                ans = l + (n - 1 - r);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}