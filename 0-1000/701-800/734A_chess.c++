#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int length;
    cin >> length;
    string score;
    cin >> score;
    
    int a = 0;
    int b = 0;
    
    string status;
    
    for(int n = 0; n < score.size(); n++){
        if(score[n] == 'A') a++;
        else if (score[n] == 'D') b++;
        
        if(a > b) status = "Anton";
        else if (a < b) status = "Danik";
        else status = "Friendship";
    }
    cout << status;
    return 0;
}