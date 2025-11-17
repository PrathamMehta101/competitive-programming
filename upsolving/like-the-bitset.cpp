#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, i;
    cin >> n >> k;
    string s;
    cin >> s;

    // check if there is a zero for every k length subarray
    map<char, int> hash;
    for (int i = 0; i < k; i++) {
        hash[s[i]]++;
    }

    if (hash['0'] == 0) {
        cout << "NO" << endl;
        return;
    }

    int l = 0, r = k - 1;
    while (r < n - 1)
    {
        hash[s[l]]--;
        l++;
        r++;
        hash[s[r]]++;

        if (hash['0'] == 0) {
            cout << "NO" << endl;
            return;
        }
    }

    vector<int> ans(n);
    int counter = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ans[i] = counter;
            counter++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            ans[i] = counter;
            counter++;
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}