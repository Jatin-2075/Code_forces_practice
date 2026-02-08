#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        if(n < 4 || n % 2 == 1)cout << -1 << "\n";
        else {
            long long min = (n + 5) / 6;
            long long max = n / 4;
            cout << min << " " << max << "\n";
        }
    }
}