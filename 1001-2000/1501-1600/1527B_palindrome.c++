#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        int z = count(s.begin(), s.end(), '0');

        if(z == 1) {
            cout << "BOB\n";
        }
        else if(n % 2 == 1 && s[n/2] == '0') {
            cout << "ALICE\n";
        }
        else if(z % 2 == 0) {
            cout << "BOB\n";
        }
        else {
            cout << "ALICE\n";
        }
    }
}