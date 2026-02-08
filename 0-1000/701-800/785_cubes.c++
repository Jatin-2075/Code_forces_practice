#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map <string, int> cubes = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int sides = 0;

    while(n--){
        string s;
        cin >> s;
        if(cubes.find(s) != cubes.end()){
            sides += cubes[s];
        }
    }

    cout << sides;
    return 0;
}