#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int years = 0;

    while(A <= B){
        A = A * 3;
        B = B * 2;
        years++;
    }
    cout << years;
    return 0;
}