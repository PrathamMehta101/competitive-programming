#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mpp[a[i]]++;
        }

        vector<int> freq(n);
        for (int i = 0; i < n; i++) {
            freq[i] = mpp[a[i]];
        }

        int maxLen = 0, curLen = 0;
        int start = -1, bestL = -1, bestR = -1;

        for (int i = 0; i < n; i++) {
            if (freq[i] == 1) {
                if (curLen == 0) start = i;
                curLen++;
                if (curLen > maxLen) {
                    maxLen = curLen;
                    bestL = start;
                    bestR = i;
                }
            }
            else {
                curLen = 0;
            }
        }

        if (bestL == -1 && bestR == -1) {
            cout << 0 << endl;
        }
        else {
            cout << bestL + 1 << " " << bestR + 1 << endl;
        }

    }

    return 0;
}
