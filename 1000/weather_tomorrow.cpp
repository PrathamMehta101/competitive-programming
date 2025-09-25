#include<bits/stdc++.h>
using namespace std;

bool checkAp(vector<int> a) {

    bool isAp = true;

    int cd = a[1] - a[0];

    for (int i = 1; i < a.size() - 1; i++) {
        if (a[i + 1] - a[i] != cd) {
            isAp = false;
            break;
        }
    }

    return isAp;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    if (checkAp(v)) {
        int cd = v[1] - v[0];
        int next_temp = v[0] + (n * cd);
        cout << next_temp;
    }
    else {
        cout << v[n - 1];
    }

    return 0;
}