#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    while(n--) {
        string s;
        cin >> s;
        mp[s]++;
    }

    string winner;
    int best = 0;

    for(auto &p : mp) {
        if(p.second > best) {
            best = p.second;
            winner = p.first;
        }
    }

    cout << winner;
}
