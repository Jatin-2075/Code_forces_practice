#include <bits/stdc++.h>
using namespace std;
 
const int LIMIT = 200000;
vector<int> primes;
 
void build_primes() {
    vector<bool> isPrime(LIMIT, true);
    isPrime[0] = isPrime[1] = false;
 
    for (int i = 2; i * i < LIMIT; i++)
        if (isPrime[i])
            for (int j = i * i; j < LIMIT; j += i)
                isPrime[j] = false;
 
    for (int i = 2; i < LIMIT; i++)
        if (isPrime[i]) primes.push_back(i);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    build_primes();
 
    int t; 
    cin >> t;
 
    while (t--) {
        long long d;
        cin >> d;
 
        long long p = *lower_bound(primes.begin(), primes.end(), d + 1);
        long long q = *lower_bound(primes.begin(), primes.end(), p + d);
 
        cout << p * q << '\n';
    }
}