#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < m; i++) cin >> b[i];

    vector<ll> prefix(n);
    prefix[0] = a[0];
    for (ll i = 1; i < n; i++) prefix[i] = prefix[i - 1] + a[i];


    for (int i = 0; i < m; i++) {
        int ln = b[i];

    }

    /*
    ll letter_number = b[i];
        ll dorm_number = 1, room_number = b[i];
        for (ll j = n - 1; j >= 0; j--) {
            // cout << letter_number << " ";
            if (letter_number > prefix[j]) {
                dorm_number = j + 1 + 1;
                room_number = letter_number - prefix[j];
                break;
            }
        }
        cout << dorm_number << " " << room_number << endl;
        */

    return 0;
}