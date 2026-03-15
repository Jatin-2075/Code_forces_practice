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
        bool status = true;
        map<long long, long long> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                long long x;
                cin >> x;
                mp[x]++;
                if(mp[x] > n*(n-1))status = false;
            }
        }
        if(status)cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}