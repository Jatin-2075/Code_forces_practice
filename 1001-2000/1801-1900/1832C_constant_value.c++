#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a;

        for (int i = 0; i < n; i++)
        {
            long long g;
            cin >> g;

            if (a.empty() || g != a.back())
            {
                a.push_back(g);
            }
        }
        int m = a.size();

        if (m <= 2)
        {
            cout << m << "\n";
            continue;
        }

        int changes = 0;

        for (int i = 1; i < m - 1; i++)
        {
            long long d1 = a[i] - a[i - 1];
            long long d2 = a[i + 1] - a[i];

            if ((d1 > 0 && d2 < 0) || (d1 < 0 && d2 > 0))
            {
                changes++;
            }
        }

        cout << changes + 2 << "\n";
    }
}