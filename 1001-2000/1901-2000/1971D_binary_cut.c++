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
        string s;
        cin >> s;

        int seg = 1, has01 = 0;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
                seg++;
            if (s[i - 1] == '0' && s[i] == '1')
                has01 = 1;
        }

        cout << seg - has01 << "\n";
    }
}