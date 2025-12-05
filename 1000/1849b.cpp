#include<bits/stdc++.h>
using namespace std;

void recursion(vector<int>& a, int n, int k, vector<int>& res) {
    // base case 
    bool allZero = true;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            allZero = false;
        }
    }

    if (allZero) return;

    // find the maximum element
    int maxEl = a[0], maxIdx = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > maxEl) {
            maxEl = a[i];
            maxIdx = i;
        }
    }

    // subtract it
    a[maxIdx] -= k;
    if (a[maxIdx] <= 0) {
        res.push_back(maxIdx + 1);
    }

    recursion(a, n, k, res);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> res;
    int order = 1;
    //RECURSIVE CODE
    recursion(a, n, k, res);

    for (int i = 0; i < n; i++) cout << res[i] << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}