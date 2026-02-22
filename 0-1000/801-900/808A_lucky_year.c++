#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long p = 1;

    while (true) {
        for (int d = 1; d <= 9; d++) {
            long long lucky = d * p;
            if (lucky > n) {
                cout << lucky - n << endl;
                return 0;
            }
        }
        p *= 10;
    }
}