#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    map<int, int> freq;
    for (int i = 0; i < n; i++) freq[a[i]]++;

    int ans = 0;
    for (auto& pair : freq) {
        if (pair.second >= pair.first) {
            ans += pair.second - pair.first;
        }
        else {
            ans += pair.second;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}