#include<bits/stdc++.h>
using namespace std;

int main() {
    string yearToGet = "2020";
    string s = "20192020";
    int n = 8;

    string yearWeMake = "";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     // cout << "INSIDE THE LOOP" << endl;
    //     if (yearWeMake + s[i] == yearToGet.substr(0, i)) {
    //         cout << "INSIDE IF" << endl;
    //         yearWeMake += s[i];
    //         cout << yearWeMake << endl;
    //     }
    // }

    // cout << yearWeMake + s[0] + s[1] << endl;
    cout << yearToGet.substr(0, 1) << endl;
    cout << yearToGet[0] << endl;
    cout << yearToGet[1] << endl;
    cout << s.substr(n - 4, n) << endl;
    cout << s.substr(0, 4) << endl;


    // if (yearWeMake == yearToGet) {
    //     cout << "YES" << endl;
    // }
    // else {
    //     cout << "NO" << endl;
    // }

    return 0;
}