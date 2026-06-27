#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k, x;
    cin >> n >> k >> x;

    vector<long long> a(n);
    for (auto &v : a) cin >> v;

    sort(a.begin(), a.end());

    vector<long long> need;
    long long groups = 1;

    for (int i = 1; i < n; i++) {
        long long gap = a[i] - a[i - 1];

        if (gap > x) {
            groups++;
            need.push_back((gap - 1) / x);
        }
    }

    sort(need.begin(), need.end());

    for (long long cur : need) {
        if (k >= cur) {
            k -= cur;
            groups--;
        } else {
            break;
        }
    }

    cout << groups << '\n';
}