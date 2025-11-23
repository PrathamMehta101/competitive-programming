#include<bits/stdc++.h>
using namespace std;

int recursion(vector<int>& a, int n, int count, int k) {
    // calculate equal segment length 
    int esl = 1, mes = 1;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] == a[i]) {
            esl++;
            mes = max(esl, mes);
        }
        else esl = 1;
    }

    // base condition
    if (mes <= k) return count;

    // update it accordingly
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    for (auto& pair : freq) {
        if (pair.second > k) { // updated 1 pair
            // take action
            int el = pair.first;
            bool appeared = false;
            for (int i = 0; i < n; i++) {
                if (!appeared && a[i] == el) {
                    appeared = true;
                    continue;
                }

                if (a[i] == el) a[i]++;
            }
            break;
        }
    }

    sort(a.begin(), a.end());
    // call recursion again
    return recursion(a, n, count + 1, k);
}


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int result = recursion(a, n, 0, k);
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}