#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const int MAXA = 1'000'000;
    static int spf[MAXA + 1];
    for (int i = 2; i <= MAXA; ++i) {
        if (spf[i] == 0) {
            spf[i] = i;
            if ((long long)i * i <= MAXA) {
                for (int j = i * i; j <= MAXA; j += i) {
                    if (spf[j] == 0) spf[j] = i;
                }
            }
        }
    }
    spf[1] = 1;

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        bool hasDescent = false;
        bool cond1 = false;
        for (int i = 0; i + 1 < n; ++i) {
            if (a[i] > a[i+1]) {
                hasDescent = true;
                int x = a[i];
                int p = (x >= 2 ? spf[x] : x);
                if (p > a[i+1]) cond1 = true;
            }
        }

        if (!hasDescent) {
            cout << "Bob\n";
            continue;
        }
        if (cond1) {
            cout << "Alice\n";
            continue;
        }

        bool hasCompositeWithTwoPrimes = false;
        for (int x : a) {
            if (x <= 3) continue; 
            int tmp = x;
            int prev = 0;
            int cnt = 0;
            while (tmp > 1 && cnt < 2) {
                int p = spf[tmp];
                if (p != prev) {
                    ++cnt;
                    prev = p;
                }
                tmp /= p;
                while (tmp % prev == 0) tmp /= prev;
            }
            if (cnt >= 2) { 
                hasCompositeWithTwoPrimes = true;
                break;
            }
        }

        if (hasCompositeWithTwoPrimes) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }

    return 0;
}