#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int available_officers = 0, untreated = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) available_officers += v[i];
        else if (v[i] < 0) {
            // crime scene
            if (available_officers > 0) {
                // treated
                available_officers--;
            }
            else untreated++;
        }
    }

    cout << untreated << endl;

    return 0;
}