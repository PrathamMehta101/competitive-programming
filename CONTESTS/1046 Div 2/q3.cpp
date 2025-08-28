#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v, int n) {
    // element: length
    unordered_map<int, int> mpp;

    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }


    // empty array
    if (n == 0) {
        cout << "ANSWER: " << 0 << endl;
        return;
    }

    bool entireArrayNeat = true;
    // if the entire array has mpp[v[i]] = v[i] return v.size()
    for (auto& pair : mpp)
    {
        if ((pair.second >= pair.first) && (pair.second % pair.first == 0)) {
            continue;
        }
        else {
            entireArrayNeat = false;
            break;
        }
    }

    if (entireArrayNeat) {
        cout << "ANSWER: " << v.size() << endl;
        return;
    }

    int ans = 0;

    // else return only the elements who subsequence has been formed
    for (auto& pair : mpp) {
        if ((pair.second >= pair.first) && (pair.second % pair.first == 0)) {
            ans += pair.second; // number of neat subarrays
        }
    }

    cout << "ANSWER: " << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;

        vector<int> v(n);

        for (i = 0; i < n; i++) cin >> v[i];

        solve(v, n);

    }


    return 0;
}

// 2 3 3 1 2 3 5 1 1 7
// 2-2, 3-3, 1-3, 5-1, 7-1