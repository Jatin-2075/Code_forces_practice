#include <bits/stdc++.h>
using namespace std;

int main(){
    int i ;
    cin >> i;

    if(i % 4 == 0){
        cout << "YES";
    }
    else if(i % 7 == 0){
        cout << "YES";
    }
    else if(i % 47 == 0){
        cout << "YES";
    }
    else if(i % 477 == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}