#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<long long, long long> cnt;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        cnt[x]++;
    }

    long long ans = 0;

    for (auto it : cnt)
    {
        long long x = it.first;
        long long f = it.second;

        long long prev = 0;

        auto p = cnt.find(x - 1);
        if (p != cnt.end())
            prev = p->second;

        if (f > prev)
            ans += f - prev;
    }

    cout << ans << '\n';
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