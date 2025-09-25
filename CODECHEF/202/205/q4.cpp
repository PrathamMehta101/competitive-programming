#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>  v, int n) {
    int i;
    int l = 0, r = 2;
    while (r < n) {
        if ((v[l] == 1 && v[r] == 2) || (v[l] == 2 || v[r] == 1)) {
            for (i = l + 1; i < r; i++) {
                if (v[i] == 1) return false;
            }
        }
        l++; r++;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        // the elements between 2 and 1 should all be 2
        bool ans = check(v, n);
        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;

    }
    return 0;
}

// for (i = 0; i < n; i++) {
    //     if (v[i] == 2) {
    //         for (j = i + 1; i < n; j++) {
    //             if (v[j] == 1 && j - i > 1) {
    //                 for (k = i + 1; k < j; i++) {
    //                     if (v[k] == 1) break;
    //                 }
    //                 if (k == j) return true;
    //             }
    //         }
    //     }
    // }


// 2 2 2 1