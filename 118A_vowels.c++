#include <bits/stdc++.h>
using namespace std;

int main() {
    string input ;
    cin >> input;

    vector<char> vowels = {'a','e','i','o','u','y'};

    string result = "";

    for(auto it : input){
        char c = tolower(it);
        if(find(vowels.begin(), vowels.end(), c) == vowels.end()){
            result += '.';
            result += c;
        }
    }
    cout << result;
}