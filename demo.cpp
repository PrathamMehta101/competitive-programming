#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string r;
    cin >> r;

    string s;
    for (int i = 1; i <= k; i++) s += r;

    map<char, int> hash;
    for (int i = 0; i < n; i++) {
        hash[s[i]]++;
    }

    int maxCount = 0;
    char maxChar;

    for (auto& pair : hash) {
        if (pair.second > maxCount) {
            maxChar = pair.first;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') {
            s[i] = maxChar;
        }
    }

    int score = 0;
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == s[i]) score++;
    }

    cout << score << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}