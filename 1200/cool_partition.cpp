#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPartition(vector<int> v, int pointOfPartition) {
    vector<int> v1, v2;

    // ✅ Use push_back instead of out-of-bounds indexing
    for (int i = 0; i < pointOfPartition; i++) {
        v1.push_back(v[i]);
    }

    for (int i = pointOfPartition; i < v.size(); i++) {
        v2.push_back(v[i]);
    }

    for (int i = 0; i < v1.size(); i++) {
        auto it = find(v2.begin(), v2.end(), v1[i]);
        if (it != v2.end()) return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = -1; // ✅ initialize
        vector<int> v(n); // ✅ allocate memory for n elements
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++) {
            if (checkPartition(v, i)) continue;
            else {
                ans = i + 1; // ✅ since answer indexing is 1-based
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
