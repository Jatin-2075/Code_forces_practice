#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'A' || c == 'E' || c == 'I' ||
           c == 'O' || c == 'U' || c == 'Y';
}

int main() {
    string s;
    cin >> s;

    int last = 0;
    int ans = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isVowel(s[i])) {
            ans = max(ans, (i + 1) - last);
            last = i + 1;
        }
    }

    ans = max(ans, (int)s.size() + 1 - last);

    cout << ans << endl;
    return 0;
}