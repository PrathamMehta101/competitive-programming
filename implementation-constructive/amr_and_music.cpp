#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    
    vector<int> v;
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int m = 0;
    vector<int> res;

    for(int i=0; i<n; i++) {
        if(k <= 0) break;
        k -= v[i];
        m++;
        res[i] = i;
    }

    cout << m << endl;

    for(int i=0; i<n; i++) {
        cout << res[i];
    }

}