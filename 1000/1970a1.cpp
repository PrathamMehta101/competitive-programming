#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    //op, idx
    vector<pair<int, int>> prefix(n);

    int op = 0;
    for (int i = 0; i < n; i++) {
        prefix[i] = { op,i };
        if (s[i] == '(') op++;
        else if (s[i] == ')') {
            if (op > 0) op--;
        }
    }

    sort(prefix.begin(), prefix.end(),
        [](auto& a, auto& b) {
            if (a.first != b.first)
                return a.first < b.first;
            return a.second > b.second;
        }
    );

    // for (int i = 0; i < n; i++) {
    //     cout << prefix[i].first << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << prefix[i].second + 1 << " ";
    // }
    // cout << endl;

    string ans;
    for (int i = 0; i < n; i++) {
        ans += s[prefix[i].second];
    }

    cout << ans << endl;

    return 0;
}