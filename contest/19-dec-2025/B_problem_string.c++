#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = "";

        for (int i = 0; i < n; i++) {
            string a;
            cin >> a;

            if (s.empty()) {
                s = a;
            } else {
                string front = a + s;
                string back  = s + a;
                s = min(front, back);
            }
        }

        cout << s << "\n";
    }
    return 0;
}
