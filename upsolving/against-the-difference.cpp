#include<bits/stdc++.h>
using namespace std;

void subsequences(vector<int> a, int& maxlen, int index, vector<int>& ds) {
    if (index == a.size()) {
        map<int, int> hash;
        for (int i = 0; i < ds.size(); i++) hash[ds[i]]++;
        bool isNeat = true;
        for (auto& pair : hash) {
            if (pair.second % pair.first != 0) {
                isNeat = false;
                break;
            }
        }
        if (isNeat) maxlen = max(maxlen, (int)ds.size());
        return;
    }

    // take
    ds.push_back(a[index]);
    subsequences(a, maxlen, index + 1, ds);
    ds.pop_back();
    subsequences(a, maxlen, index + 1, ds); // not take
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ds;
        int maxlen = 0;
        subsequences(a, maxlen, 0, ds);

        cout << "ANSWER: " << maxlen << "\n";
    }

    return 0;
}