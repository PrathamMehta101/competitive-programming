#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<string, int> mpp;
    mpp["Tetrahedron"] = 4;
    mpp["Cube"] = 6;
    mpp["Octahedron"] = 8;
    mpp["Dodecahedron"] = 12; 
    mpp["Icosahedron"] = 20;

    int n;
    cin >> n;

    int faces = 0;

    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        faces += mpp[s];
    }
    
    cout << faces;

    return 0;
}