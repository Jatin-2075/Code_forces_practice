#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n, q;
    cin >> n >> q;

    vector<long long> nums(n + 1);
    vector<int> last(n + 1, 0);

    long long sum = 0;

    for(int i = 1; i <= n; i++) {
        cin >> nums[i];
        sum += nums[i];
    }

    long long global = 0;
    int globalTime = 0;

    for(int t = 1; t <= q; t++) {

        int type;
        cin >> type;

        if(type == 1) {

            int i;
            long long x;

            cin >> i >> x;

            long long oldValue;

            if(last[i] < globalTime) {
                oldValue = global;
            }
            else {
                oldValue = nums[i];
            }

            sum -= oldValue;
            sum += x;

            nums[i] = x;
            last[i] = t;

        }
        else {

            long long x;
            cin >> x;

            global = x;
            globalTime = t;

            sum = 1LL * n * x;
        }

        cout << sum << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}