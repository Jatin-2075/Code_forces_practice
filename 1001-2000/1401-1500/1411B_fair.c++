#include <bits/stdc++.h>
using namespace std;

bool isFair(long long n) {
    long long temp = n;

    while(temp > 0) {
        int d = temp % 10;
        temp /= 10;

        if(d != 0 && n % d != 0) return false;
    }
    return true;
}

void solve() {
    long long n;
    cin >> n;

    while(true) {
        if(isFair(n)) {
            cout << n << "\n";
            return;
        }
        n++;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}