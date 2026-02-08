#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int times = 0;
        bool inBlock = false;

        for(int i = 0; i < n; i++){
            int a;
            cin >> a;

            if(a != 0){
                if(!inBlock){
                    times++;
                    inBlock = true;
                }
            }
            else{
                inBlock = false;
            }
        } 

        if(times > 2) times = 2;

        cout << times << "\n";
    }
}
