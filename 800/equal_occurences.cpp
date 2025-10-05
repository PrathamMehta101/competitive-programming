#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int longest = 0, count = 0;

        vector<int> v(n);
        map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mpp[v[i]]++;
        }

        // 1 1 1 1 1 2 2 2 2 3 3 3 4 4 5
        // 1-5, 2-4, 3-3, 4-2, 5-1
        // 5*1, 4*2, 3*3, 2*4, 5*1 -> max 9

        for (auto& pair : mpp) {
            count = 0;
            int current = pair.second;
            for (auto& pair2 : mpp) {
                if (pair2.second >= current) count += current;
            }
            longest = max(count, longest);
        }

        cout << longest << endl;

    }
    return 0;
}