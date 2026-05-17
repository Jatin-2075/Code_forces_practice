#include <bits/stdc++.h>
using namespace std;

uint64_t best_diff;
uint64_t A;
string S;
int d1, d2;

void solve(int idx, int state, uint64_t current_val) {
    if (idx == (int)S.length()) {
        uint64_t diff = (A > current_val) ? (A - current_val) : (current_val - A);
        if (diff < best_diff) best_diff = diff;
        return;
    }
    
    if (state == 1) { 
        solve(idx + 1, 1, current_val * 10 + d2);
    } 
    else if (state == 2) { 
        solve(idx + 1, 2, current_val * 10 + d1);
    } 
    else {
        int n1 = 0;
        if (d1 < S[idx] - '0') n1 = 1;
        else if (d1 > S[idx] - '0') n1 = 2;
        solve(idx + 1, n1, current_val * 10 + d1);
        
        int n2 = 0;
        if (d2 < S[idx] - '0') n2 = 1;
        else if (d2 > S[idx] - '0') n2 = 2;
        solve(idx + 1, n2, current_val * 10 + d2);
    }
}

void run_case() {
    int n;
    cin >> A >> n;
    cin >> d1 >> d2;
    
    S = to_string(A);
    best_diff = -1ULL;

    solve(0, 0, 0);
    
    if (S.length() > 1) {
        uint64_t cand1 = 0;
        for (size_t i = 0; i < S.length() - 1; ++i) {
            cand1 = cand1 * 10 + d2;
        }
        uint64_t diff1 = (A > cand1) ? (A - cand1) : (cand1 - A);
        if (diff1 < best_diff) best_diff = diff1;
    }
    
    uint64_t cand2 = 0;
    if (d1 > 0) {
        for (size_t i = 0; i < S.length() + 1; ++i) {
            cand2 = cand2 * 10 + d1;
        }
    } else {
        cand2 = d2;
        for (size_t i = 0; i < S.length(); ++i) {
            cand2 = cand2 * 10 + 0;
        }
    }
    
    uint64_t diff2 = (A > cand2) ? (A - cand2) : (cand2 - A);
    if (diff2 < best_diff) best_diff = diff2;
    
    cout << best_diff << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            run_case();
        }
    }
    return 0;
}