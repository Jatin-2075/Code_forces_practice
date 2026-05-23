#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int x) {
    int l = 0;
    int r = a.size() - 1;

    while (l < r) {
        if (a[l] == a[r]) {
            l++;
            r--;
        }
        else if (a[l] == x) {
            l++;
        }
        else if (a[r] == x) {
            r--;
        }
        else {
            return false;
        }
    }

    return true;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;

    while (l < r && a[l] == a[r]) {
        l++;
        r--;
    }

    if (l >= r) {
        cout << "YES\n";
        return;
    }

    if (check(a, a[l]) || check(a, a[r])) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}