#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, kmax;
    cin >> n >> kmax;
    string s;
    cin >> s;
    string t;
    cin >> t;
    int op = 0;

    string s1 = s;
    vector<string> v;

    while (kmax--) {
        if (s == t) break;
        op++;
        for (int i = 1; i < s1.size(); i++) {
            if (s1[i] = t[i]) continue;
            else if (s1[i] != t[i]) {
                if (s[i - 1] = t[i]) s1[i] = s[i - 1];
                else break;
            }
        }
        v.push_back(s1);
        s = s1;
    }

    if (s == t) {
        cout << op << endl;
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << endl;
        }
    }
    else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}