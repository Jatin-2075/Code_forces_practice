#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;

    int arr[n] ;
    int p = 0;
    while(p < n){
        cin >> arr[p];
        p++;
    }
    int kth = arr[k-1];

    int count = 0;
    for(auto it : arr){
        if(it >= kth && it > 0){
            count ++;
        }
    }
    cout << count;
    
}