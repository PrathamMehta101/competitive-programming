#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        int aliceCandies = 0, bobCandies = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0) { aliceCandies += v[i]; continue; }

            if (aliceCandies > bobCandies) bobCandies += v[i];
            else aliceCandies += v[i];
        }

        if (aliceCandies == bobCandies) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}