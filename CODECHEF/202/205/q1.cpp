#include<bits/stdc++.h>
using namespace std;

bool checkCute(string s) {
    if (s.length() == 3) {
        if (s[0] == s[2]) {
            if (s[1] == 'w') {
                return true;
            }
        }
    }

    return false;
}

int main() {
    string s;
    cin >> s;

    bool ans = checkCute(s);
    if (ans) cout << "Cute" << endl;
    else cout << "No" << endl;
    return 0;
}