#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int u = 0, l = 0;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (s[i] >= 97) l++;
        else u++;
    }

    if (u > l) {
        //convert to uppercase
        for (int i = 0; i < s.size(); i++) {
            // lower -> upper
            if (s[i] >= 97) s[i] -= 32;
        }
    }
    else if (l >= u) {
        //convert to lowercase
        for (int i = 0; i < s.size(); i++) {
            // lower -> upper
            if (s[i] < 97) s[i] += 32;
        }
    }

    cout << s << endl;
    return 0;
}