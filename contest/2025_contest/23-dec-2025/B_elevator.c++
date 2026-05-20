#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int total = 0;
        for (int i = 1; i < n; i++) {
            total += abs(a[i] - a[i - 1]);
        }

        int answer = total;

        answer = min(answer, total - abs(a[0] - a[1]));

        answer = min(answer, total - abs(a[n - 2] - a[n - 1]));

        for (int i = 1; i < n - 1; i++) {
            int oldCost = abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]);
            int newCost = abs(a[i - 1] - a[i + 1]);

            int candidate = total - oldCost + newCost;
            answer = min(answer, candidate);
        }

        cout << answer << "\n";
    }

    return 0;
}
