#include <bits/stdc++.h>
using namespace std;

int main(){
    int students;
    cin >> students;
    string result = "EASY";

    for(int n = 0; n < students; ++n){
        int hardness;
        cin >> hardness;
        if(hardness == 1) result = "HARD";
    }
    cout << result;
    return 0;
}