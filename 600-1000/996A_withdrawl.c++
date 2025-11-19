#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> nums = {1, 5, 10, 20, 100};

    int notes = 0;

    while(n != 0){
        int i = nums.size() - 1;

        while(i >= 0){
            if(nums[i] > n){
                i--;
            }
            else{
                n = n - nums[i];
                notes++;
            }
        }
    }

    cout << notes;
    return 0;
}