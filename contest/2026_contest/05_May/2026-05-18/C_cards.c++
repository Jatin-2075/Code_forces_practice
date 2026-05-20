#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    long long S = 0;
    long long Sum_ge2 = 0;
    long long P_total = 0;
    long long Count_ge2 = 0;
    
    for (int i = 0; i < n; ++i) {
        long long c;
        cin >> c;
        if (c == 1) {
            S++;
        } else {
            Sum_ge2 += c;
            P_total += (c / 2);
            Count_ge2++;
        }
    }
    
    if (Count_ge2 == 0) {
        cout << 0 << "\n";
    }
    
    else if (Count_ge2 == 1) {
        long long ans = Sum_ge2 + min(S, P_total);

        if (ans < 3) {
            cout << 0 << "\n";
        } 
        
        else {
            cout << ans << "\n";
        }
    } 
    
    else {
        long long slots = P_total - Count_ge2;

        if (slots < 0) slots = 0;

        long long ans = Sum_ge2 + min(S, slots);

        if (ans < 3) {
            cout << 0 << "\n";
        }
        
        else {
            cout << ans << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int multTestQ;
    if (cin >> multTestQ) {
        while (multTestQ--) {
            solve();
        }
    }
    return 0;
}