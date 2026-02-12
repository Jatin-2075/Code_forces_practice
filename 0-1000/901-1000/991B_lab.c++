#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());

    int ans = 0;
    int i = 0;

    while((double)sum / n < 4.5){
        sum += (5 - a[i]);
        ans++;
        i++;
    }

    cout << ans;
}
