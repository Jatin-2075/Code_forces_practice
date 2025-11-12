#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, n;
    cin >> k >> n;

    long long oddcount = (k+1)/2;

    if(n <= oddcount){
        cout << 2 * n -1;
    }
    else{
        cout << 2 * (n - oddcount);
    }
}