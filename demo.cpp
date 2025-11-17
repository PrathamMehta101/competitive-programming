#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    map<int, int> hash;
    for (int i = 1; i <= n; i++) hash[i] = 0;
    for (int i = 0; i < n; i++) hash[v[i]]++;
    hash.erase(0);

    vector<int> rem;
    for (auto& pair : hash) {
        if (pair.second == 0) rem.push_back(pair.first);
    }
    sort(rem.begin(), rem.end(), greater<int>());

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            v[i] = rem[j];
            j++;
        }
    }


    vector<int> diff(n - 1);
    for (int i = 0; i < n - 1; i++) {
        diff[i] = v[i + 1] - v[i];
    }

    vector<int> sorted(n);
    for (int i = 0; i < n; i++) {
        sorted[i] = i + 1;
    }

    int segments = 0;
    for (int i = 0; i < n; i++) {
        if (sorted[i] != v[i]) segments++;
    }
    cout << segments << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}