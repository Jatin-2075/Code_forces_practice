#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    if (!(cin >> n >> q)) return;

    vector<int> pos(51, -1); 

    for (int i = 1; i <= n; i++) {
        int color;
        cin >> color;
        if (pos[color] == -1) {
            pos[color] = i;
        }
    }

    for (int i = 0; i < q; i++) {
        int query_color;
        cin >> query_color;

        int current_pos = pos[query_color];
        cout << current_pos << (i == q - 1 ? "" : " ");

        for (int c = 1; c <= 50; c++) {
            if (pos[c] != -1 && pos[c] < current_pos) {
                pos[c]++;
            }
        }

        pos[query_color] = 1;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}