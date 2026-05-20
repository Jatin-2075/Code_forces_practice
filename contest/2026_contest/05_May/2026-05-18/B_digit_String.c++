#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int count_4 = 0;
    int total_2s = 0;
    int max_diff = 0;
    int diff = 0;
    
    for (char c : s) {
        if (c == '4')count_4++;

        else if (c == '2') {
            total_2s++;
            diff++;
            if (diff > max_diff) {
                max_diff = diff;
            }
        }
        
        else  diff--;
    }
    
    cout << count_4 + total_2s - max_diff << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}