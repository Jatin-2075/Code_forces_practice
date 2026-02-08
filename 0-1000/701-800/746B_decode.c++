#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string t = "";

    for (int i = n - 1; i >= 0; i--) {
        int pos = t.size() / 2;
        t.insert(t.begin() + pos, s[i]);
    }

    cout << t;
    return 0;
}
