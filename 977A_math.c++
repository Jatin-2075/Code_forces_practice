#include <bits/stdc++.h>
using namespace std;

int main() {
    int number , k;
    cin >> number >> k;

    while(k){
        if(number % 10 == 0){
            k--;
            number = number / 10;
        }
        else {
            k--;
            number = number - 1;
        }
    }
    cout << number;
}