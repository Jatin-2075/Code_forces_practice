#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; string x;
        cin >> n >> x;

        int elo=0, ehi=0;
        int olo=1, ohi=0; 

        bool ok = true;

        for(int i = 0; i < n; i++){
            int nelo=n+1, nehi=-1;
            int nolo=n+1, nohi=-1;
            auto relax = [&](int lo, int hi){
                if(lo > hi) return;
                char left_char = ((lo+1)%2) ? 'a' : 'b';
                if(x[i]=='?' || x[i]==left_char){
                    int nl=lo+1, nh=hi+1;
                    if(nl%2==0){ nelo=min(nelo,nl); nehi=max(nehi,nh); }
                    else        { nolo=min(nolo,nl); nohi=max(nohi,nh); }
                }

                char right_char = ((n-i+lo)%2) ? 'a' : 'b';
                if(x[i]=='?' || x[i]==right_char){
                    if(lo%2==0){ nelo=min(nelo,lo); nehi=max(nehi,hi); }
                    else        { nolo=min(nolo,lo); nohi=max(nohi,hi); }
                }
            };

            relax(elo, ehi);
            relax(olo, ohi);

            elo=nelo; ehi=nehi;
            olo=nolo; ohi=nohi;

            if(elo>ehi && olo>ohi){ ok=false; break; }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}