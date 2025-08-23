#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while(t--) {  
        int n;
        cin >> n;

        vector<int> v(n);
        unordered_map<int, int> mpp;

        for(int i=0; i<n; i++) {
            cin >> v[i];
            mpp[v[i]]++;
        }

        if(mpp[1] % 2 == 0 && mpp[2] % 2 == 0) cout << "YES" << endl;
        else if (mpp[2] * 2  == mpp[1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}