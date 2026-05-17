#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long xr = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        xr ^= x;
    }

    if (n % 2 == 1)
    {
        cout << xr << endl;
    }
    else
    {
        if (xr == 0)
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}