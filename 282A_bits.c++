#include <bits/stdc++.h>
using namespace std;

int main() {
    int count ;
    cin >> count;
    int number = 0;
    while(count--){
        string operation ;
        cin >> operation;

        if(operation.back() == '-' || operation[0] == '-'){
            number--;
        }
        else{
            number++;
        }
    }
    cout << number;
}