#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        vector<int> result;
        int len = s.size();

        int pos = 0;

        for(int i = len - 1; i >= 0; i--) {
            if(s[i] != '0') {
                int digit = s[i] - '0';
                int value = digit * pow(10, pos);
                result.push_back(value);
            }
            pos++;
        }

        cout << result.size() << "\n";
        for(int x : result) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
