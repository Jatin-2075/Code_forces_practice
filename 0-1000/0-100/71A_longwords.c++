#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <string> togive;

    while(n--){
        string word;
        cin >> word;
        if(word.length() <= 10){
            togive.push_back(word);
        }
        else {
            auto finalans = word[0] + to_string(word.length() - 2) + word.back();
            togive.push_back(finalans);
        }
    }

    for(auto it : togive){
        cout << it << '\n';
    }
    return 0;
}
