#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long ans = 0;

    for(long long i = 1; i <= n; i *= 10){
        ans += (n - i + 1);
    }

    cout << ans;
}