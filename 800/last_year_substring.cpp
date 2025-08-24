#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // see if by adding characters you get closer to 2020 or not
        // ex, if the first 3 characters of added string = first three characters of 2020 ? good else, time to cut from latest character;

        string yearToGet = "2020";

        // OBSERVATION - there are only 5 ways to make 2020 by cutting down a single substring
        if (s.substr(n - 4, n) == "2020" || s.substr(0, 4) == "2020" || s.substr(0, 1) + s.substr(n - 3, n) == "2020" || s.substr(0, 2) + s.substr(n - 2, n) == "2020" || s.substr(0, 3) + s.substr(n - 1, n) == "2020") {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}