#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        // any 5 consecutive elements should not be in ascending or descending order in the array

        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        vector<int> rightSide, leftSide;
        int left=0, right=n-1;

        while(left <= right) {
            
        }



    }
    return 0;
}