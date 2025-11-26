#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll x;
    cin >> x;

    vector<ll> cubes;
    ll counter = 1;
    while (true) {
        ll cube = counter * counter * counter;
        cubes.push_back(cube);
        if (cube > x) break;
        counter++;
    }

    counter = 1;

    for (int i = 0; i < cubes.size(); i++) {
        ll rem = x - cubes[i];
        int low = 0, high = cubes.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (cubes[mid] == rem) {
                cout << "YES" << endl;
                return;
            }
            else if (cubes[mid] > rem) high = mid - 1;
            else low = mid + 1;
        }
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}