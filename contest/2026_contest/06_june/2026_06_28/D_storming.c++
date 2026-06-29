#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;
int spf[MAXN];

void sieve() {
    for (int i = 2; i < MAXN; i++) {
        spf[i] = i;
    }
    for (int i = 2; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    
    int omega = 0;
    int distinct_primes = 0;
    int current = n;
    int last_prime = 0;

    while (current > 1) {
        int p = spf[current];
        omega++;
        
        if (p != last_prime) {
            distinct_primes++;
            last_prime = p;
        }
        
        current /= p;
    }

    cout << omega + distinct_primes - 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}