#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;

    int count = 0;
    int totalCost = 0;

    while(count < w){
        count++;
        int costThisBanana = count * k; 
        totalCost += costThisBanana;
    }

    int borrow = totalCost - n;

    if(borrow <= 0) cout << 0;
    else cout << borrow;
}
