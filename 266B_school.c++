#include <bits/stdc++.h>
using namespace std;

int main() {
    string student , n;
    int t;
    cin >> n >> t;
    cin >> student;


    while(t--){
        for(int i = 0; i < student.size() - 1; i++){
            if(student[i] == 'B' && student[i+1] == 'G'){
                swap(student[i], student[i+1]);
                i++;
            }
        }
    }
    
    cout << student;
    return 0;
}