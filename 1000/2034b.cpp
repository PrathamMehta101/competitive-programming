#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    int ptr = 0;
    int points = 0;
    int zeroes = 0;

    while (ptr < n) {
        if (s[ptr] == '0') zeroes++;
        else zeroes = 0;

        if (zeroes == m) {
            ptr += k;
            points++;
            zeroes = 0;
            continue;
        }

        ptr++;
    }

    cout << points << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}