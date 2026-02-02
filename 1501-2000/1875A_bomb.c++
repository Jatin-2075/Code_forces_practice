#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;
        long long sum = 0;
        while(n--){
            long long h ;
            cin >> h;
            sum += min(a-1, h);
        }
        cout << b + sum << "\n";
    }
}