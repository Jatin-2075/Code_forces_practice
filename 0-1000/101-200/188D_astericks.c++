#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++){
        for(int m = 0; m <= i; m++){
            cout << "*";
        }
        cout << "\n";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}