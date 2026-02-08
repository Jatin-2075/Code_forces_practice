#include <bits/stdc++.h>
using namespace std;

bool solve() {
    string s, t;
    cin >> s >> t;
    map<char, int> needed;
    for (char c : t) needed[c]++;

    string result = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        char current = s[i];
        if (needed[current] > 0) {
            result += current;
            needed[current]--;
        } else {
        }
    }

    reverse(result.begin(), result.end());
    return result == t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--) {
        if (solve()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}