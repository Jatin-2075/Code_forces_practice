#include <bits/stdc++.h>
using namespace std;

int main (){
    string number;
    cin >> number;
    int count = 0;

    for(int n = 0; n < number.size(); ++n){
        if(number[n] == '4' || number[n] == '7') {
            count ++;
        }
    }
    if(count == 4 || count == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}