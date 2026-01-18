#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> nums;

    while(n--){
        long long a;
        cin >> a;

        while(a % 2 == 0){
            a /= 2;
        }

        if(a == 1){
            nums.push_back("NO");
        }
        else{
            nums.push_back("YES");
        }
    }

    for(auto it : nums){
        cout << it << endl;
    }


}