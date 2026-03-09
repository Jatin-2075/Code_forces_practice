#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string a, b;
        cin >> a >> b;

        int best = 0;

        for(int i = 0; i < a.size(); i++) {
            for(int j = i; j < a.size(); j++) {
                string sub = a.substr(i, j - i + 1);
                if(b.find(sub) != string::npos) {
                    best = max(best, (int)sub.size());
                }
            }
        }

        cout << a.size() + b.size() - 2 * best << endl;
    }
}