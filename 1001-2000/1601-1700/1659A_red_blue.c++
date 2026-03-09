#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;

        int gap = r / (b + 1);
        int extra = r % (b + 1);

        for (int i = 0; i < b + 1; i++) {
            for (int j = 0; j < gap; j++) {
                cout << 'R';
            }

            if (extra > 0) {
                cout << 'R';
                extra--;
            }

            if (i < b) cout << 'B';
        }

        cout << "\n";
    }
}