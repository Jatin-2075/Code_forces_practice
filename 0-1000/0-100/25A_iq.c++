#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int odd = 0 , even = 0;
    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(nums[i] % 2 == 0) even++;
        else odd++;
    }

    if(even > odd){
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0){
                cout << i + 1;
                return 0;
            }
        }
    }
    
    else{
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                cout << i + 1;
                return 0;
            }
        }
    }
}
