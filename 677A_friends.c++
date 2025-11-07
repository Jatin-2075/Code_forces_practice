#include <bits/stdc++.h>
using namespace std;

int main(){
    int number, height, width = 0;
    cin >> number >> height;

    for(int n = 0; n < number; n++){
        int friends;
        cin >> friends;

        if(friends > height){
            width += 2;
        }
        else{
            width++;
        }
    }
    cout << width;
}