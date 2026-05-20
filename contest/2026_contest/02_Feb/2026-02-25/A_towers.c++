#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, m, d;
        cin >> n >> m >> d;

        int maxHeight = d / m + 1;   
        int towers = (n + maxHeight - 1) / maxHeight;  
        cout << towers << '\n';
    }
    return 0;
}