#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    // result of a difference array is 
    // -2nd element + last element 
    int first = v[0], last = v.back(), one_replacement;

    if (first == -1 && last != -1) {
        first = last; // making -1 to be last so that they cut off
        one_replacement = last;
    }
    else if (last == -1 && first != -1) {
        last = first; // making -1 to be first so that they cut off
        one_replacement = first;
    }
    else if (first == -1 && last == -1) {
        first = last = 0; // can be anything coz theyll minus at the end
        one_replacement = 0;
    }
    else {
        first = v[0];
        last = v.back();
        one_replacement = 0; // can be anything 
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == -1) v[i] = one_replacement;
    }

    int sum = abs(last - first);
    cout << sum << endl;
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}