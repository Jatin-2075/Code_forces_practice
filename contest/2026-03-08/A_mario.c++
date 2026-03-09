#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ones;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ones.push_back(i);
        }
    }

    if (ones.empty()) {
        cout << "0 0" << endl;
        return;
    }

    long long mini = 0;
    long long maxi = 0;

    int start = ones[0];
    int end = ones[0];

    for (size_t i = 1; i < ones.size(); ++i) {
        if (ones[i] - end <= 2) {
            end = ones[i];
        } else {
            int L = end - start + 1;
            maxi += L;
            mini += (L / 2) + 1;

            start = ones[i];
            end = ones[i];
        }
    }
    int L = end - start + 1;
    maxi += L;
    mini += (L / 2) + 1;

    cout << mini << " " << maxi << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}