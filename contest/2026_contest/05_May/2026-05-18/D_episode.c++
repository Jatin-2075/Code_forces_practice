#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<int> next_A(n + 2, n + 1);
    vector<int> next_B(n + 2, n + 1);
    vector<int> limit(n + 2, n + 1);

    long long total_valid_segments = 0;

    for (int L = n; L >= 1; L--) {
        if (a[L] == b[L]) {
            int episode = a[L];
            int next_needed = episode + 1;
            
            int dayA = next_A[next_needed];
            int dayB = next_B[next_needed];

            if (dayA == dayB) {
                limit[L] = limit[dayA]; 
            } else {
                limit[L] = min(dayA, dayB);
            }
        }

        next_A[a[L]] = L;
        next_B[b[L]] = L;

        int first_ep1_A = next_A[1];
        int first_ep1_B = next_B[1];
        
        int max_R;
        
        if (first_ep1_A == first_ep1_B) {
            max_R = limit[first_ep1_A];
        } else {
            max_R = min(first_ep1_A, first_ep1_B);
        }

        total_valid_segments += (max_R - L);
    }

    cout << total_valid_segments << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int multTestQ;
    cin >> multTestQ;
    while (multTestQ--) {
        solve();
    }
    
    return 0;
}