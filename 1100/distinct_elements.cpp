#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<int> expected_differences(n);
    for (int i = 0; i < n; i++) expected_differences[i] = i + 1;

    vector<int> actual_differences(n);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            actual_differences[i] = b[i];
            continue;
        }
        actual_differences[i] = b[i] - b[i - 1];
    }

    // cout << "EXPECTED DIFFERENCES" << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << expected_differences[i] << " ";
    // }
    // cout << endl;
    // cout << "ACTUAL DIFFERENCES" << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << actual_differences[i] << " ";
    // }
    // cout << endl;

    vector<int> result;
    int element = 0;
    for (int i = 0; i < n; i++) {
        if (actual_differences[i] >= expected_differences[i]) {
            element++; // distint element added
        }
        result.push_back(element);
    }

    for (int i = 0; i < n; i++) cout << result[i] << " ";

    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}