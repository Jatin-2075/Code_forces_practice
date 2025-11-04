#include <bits/stdc++.h>
using namespace std;

int main() {
    string numbers;
    cin >> numbers;
    vector <int> number;

    for(int n = 0; n < numbers.size(); n += 2){
        int nums = numbers[n] - '0';
        number.push_back(nums);
    }

    sort(number.begin(), number.end());

    for(int n = 0; n < number.size(); n++ ){
        cout << number[n];
        if(n != number.size() - 1){
            cout << "+";
        }
    }
}