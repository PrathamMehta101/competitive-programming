#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    vector<int> ans(4);
    int el = 1;
    for (int i = 0; i < 4; i++) {
        ans[i] = el;
        el = el << 1;
    }

    for (int i = 0; i < 4; i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}