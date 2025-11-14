#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector <int> nums ;

    while(a--){
        long long a, b;

        cin >> a >> b;

        if(a % b == 0) nums.push_back(0);
        else{
            int an = b - ( a % b);
            nums.push_back(an);
        }
    }
    for(auto it : nums){
        cout << it << endl;
    }
}