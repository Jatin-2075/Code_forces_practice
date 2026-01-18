#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> ans;
    while(n--){
        int a, k;
        cin >> a >> k;
        int counting = 1, answer = 0;
        vector<int> idk;
        for(int t = 0; t < a; t++){
            int l;
            cin >> l;
            idk.push_back(l);
        }
        sort(idk.begin(), idk.end());
        if(idk.size() > 1){
            for(int r = 1; r < idk.size(); r++){
                if(idk[r] - idk[r-1] > k){
                    answer = max(answer, counting);
                    counting = 1;
                }
                else{
                    counting++;
                }
            }
            answer = max(answer , counting);
            ans.push_back(a - answer);
        }
        else{
            ans.push_back(0);
        }
    }
    for(auto i : ans){
        cout << i << endl;
    }
}