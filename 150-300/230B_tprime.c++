#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isprime(long long n){
        if(n <= 1) return false;

        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    vector<string> ans;

    while(n--){
        long long o;
        cin >> o;

        long long r = sqrt(o);

        if(r * r == o && sol.isprime(r)){
            ans.push_back("YES");
        } else {
            ans.push_back("NO");
        }
    }

    for(auto &it : ans){
        cout << it << endl;
    }
}
