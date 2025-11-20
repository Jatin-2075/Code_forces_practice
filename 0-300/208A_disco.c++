#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    for (int n = 0; n < s.size();) {
        if (n + 2 < s.size() && s.substr(n,3) == "WUB") {
            ans += " ";
            n += 3;
        } else {
            ans += s[n];
            n++;
        }
    }

    cout << ans;
    return 0;
}
