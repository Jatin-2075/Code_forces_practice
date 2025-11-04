#include <bits/stdc++.h>
using namespace std;

int main(){
    string checker;
    cin >> checker;

    set<char> set(checker.begin(), checker.end());

    int num = set.size();
    if( num % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    return 0;
}