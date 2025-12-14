#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;

    cin >> n;

    vector <int> nums;

    while(n--){
        int a;
        cin >> a;
        int twos = 0, threes = 0;

        while(a % 2 == 0){
            twos++;
            a = a / 2;
        }
        while(a % 3 == 0){
            threes++;
            a = a / 3;
        }
        if(a != 1){
            nums.push_back(-1);
        }
        else if(twos <= threes){
            nums.push_back((2 * threes) - twos);
        }
        else{
            nums.push_back(-1);
        }
    }
    for(int it : nums){
        cout << it << endl;
    }
}