#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> sets(n);
        vector<int> freq(m + 1, 0);

        for (int i = 0; i < n; i++) {
            int l;
            cin >> l;
            sets[i].resize(l);
            for (int j = 0; j < l; j++) {
                cin >> sets[i][j];
                freq[sets[i][j]]++;
            }
        }

        bool check = true;
        for(int p = 1; p <= m; p++){
            if(freq[p] == 0){
                check = false;
                break;
            }
        }

        int removable = 0;
        for (int i = 0; i < n; i++) {
            bool can_remove = true;
            for (int x : sets[i]) {
                if (freq[x] <= 1) {
                    can_remove = false;
                    break;
                }
            }
            if (can_remove) removable++;
        }

        if(check && removable >= 2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
