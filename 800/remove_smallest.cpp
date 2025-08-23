#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        int ans = true;
        int p1=0, p2=1;
        vector<int> v(n);

        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        int *p1 = v[0];
        int *p2 = v[1];

        while(p2 != *v[v.size()-1]) {
            if(*p1 > *p2) {
                delete p2;
                p1++;
                *p2 = p1+1;
            } else {
                delete p1;
                p2++;
                *p1 = p2 - 1;
            }
        }

    }
    return 0;
}