#include <bits/stdc++.h>
using namespace std;

int main(){
    int input;
    cin >> input;
    while(true){
        input++;

        string year = to_string(input);

        set <int> st(year.begin(), year.end());

        if(st.size() == year.size()){
            cout << input;
            return 0;
        }
    }
}