#include<bits/stdc++.h>
using namespace  std;

int main() {
    string s;
    cin >> s;
    char c = s[0];
    // small
    if (c >= 97) s[0] = c - 32; // making it capital

    cout << s << endl;

    return 0;
}