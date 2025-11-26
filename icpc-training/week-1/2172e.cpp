#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> permutations = {
        // n = 2
        12, 21,

        // n = 3
        123, 132, 213, 231, 312, 321,

        // n = 4
        1234, 1243, 1324, 1342, 1423, 1432,
        2134, 2143, 2314, 2341, 2413, 2431,
        3124, 3142, 3214, 3241, 3412, 3421,
        4123, 4132, 4213, 4231, 4312, 4321
    };


    int n_length = to_string(n).length();
    vector<int> valid_permutations;
    for (int i = 0; i < permutations.size(); i++) {
        int s_length = to_string(permutations[i]).length();

        if (s_length == n_length) {
            valid_permutations.push_back(permutations[i]);
        }
    }

    sort(valid_permutations.begin(), valid_permutations.end());

    string x = to_string(valid_permutations[j - 1]);
    string y = to_string(valid_permutations[k - 1]);

    // check for common elements
    int count_of_bs = n_length;
    int count_of_as = 0;
    for (int i = 0; i < n_length; i++) {
        if (x[i] == y[i]) {
            count_of_as++;
            count_of_bs--;
        }
    }

    cout << count_of_as << "A" << count_of_bs << "B" << endl;
}


int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}