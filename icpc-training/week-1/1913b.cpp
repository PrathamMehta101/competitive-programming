#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int ones = 0, zeroes = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') zeroes++;
        else ones++;
    }

    string t = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0' && ones > 0) {
            ones--;
            t += '1';

        }
        else if (s[i] == '1' && zeroes > 0) {
            zeroes--;
            t += '0';
        }
        else break;
        // example - 111100
        // intuition - 00__11 -> wrong as tf r u going to fill the __ as? 1 obviously and as soon as you do, the string is not good?
    }

    cout << s.length() - t.length() << endl;


}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
    return 0;
}