#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <string> show ;

    while(n--){
        string input;
        cin >> input;

        string check = "yes";
        bool checker = true;

        for(int i = 0; i < 3; i++){
            if(!(tolower(input[i]) == check[i])){
                checker = false;
            }
        }
        if(checker){
            show.push_back("YES");
        }
        else{
            show.push_back("NO");
        }
    }

    for(auto it : show ){
        cout << it << endl;
    }
}