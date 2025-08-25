#include<bits/stdc++.h>
using namespace std;

bool checkMinMaxMex(vector<int> v, int n) {
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxNumber = max(v[i], maxNumber);
        minNumber = min(v[i], minNumber);
    }

    int mexNumber, i;
    sort(v.begin(), v.end());
    for (i = 0; i < n; i++)
    {
        if (v[i] != i) {
            mexNumber = i;
            break;
        }
    }

    if (i == n) mexNumber = n;

    if (mexNumber == (maxNumber - minNumber)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        bool ans = true;

        // send elements in batches of three
        for (int i = 0; i < n - n % 3; i += 3) {
            vector<int> a = { v[i], v[i + 1], v[i + 2] };
            if (checkMinMaxMex(a, a.size())) continue;
            else {
                ans = false;
                break;
            }
        }

        // sending rest elements (if any)


        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}