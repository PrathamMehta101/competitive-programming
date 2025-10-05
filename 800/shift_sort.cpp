#include<bits/stdc++.h>
using namespace std;

int main() {
    // divide the stirng into 2 parts 
    // see the number of zeroes in the 2nd part
    // that is the number of moves to be made



    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int c = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') c++;
        }

        int ans = c;
        for (int i = 0; i < c; i++) {
            if (s[i] == '0') ans--;
        }

        cout << ans << endl;
    }

    return 0;
}