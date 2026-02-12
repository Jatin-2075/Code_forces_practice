#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> a(3, vector<int>(3));

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];

    int di[5] = {0, 0, 0, 1, -1};
    int dj[5] = {0, 1, -1, 0, 0};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            int sum = 0;

            for(int k = 0; k < 5; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if(ni >= 0 && ni < 3 && nj >= 0 && nj < 3)
                    sum += a[ni][nj];
            }

            if(sum % 2 == 0) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }

    return 0;
}
