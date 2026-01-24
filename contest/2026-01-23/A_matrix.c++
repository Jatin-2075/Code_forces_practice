#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n, h, l;
        cin >> n >> h >> l;

        int R = 0, C = 0, B = 0;

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            bool fitsRow = (x <= h);
            bool fitsCol = (x <= l);

            if (fitsRow && fitsCol)
                B++;
            else if (fitsRow)
                R++;
            else if (fitsCol)
                C++;
        }
        int limit1 = R + B;
        int limit2 = C + B;
        int limit3 = (R + C + B) / 2;

        cout << min({limit1, limit2, limit3}) << "\n";
    }
}
