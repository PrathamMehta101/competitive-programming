#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int res = 0;

    for(int i=0; i<n; i++){
        cin >> res;
        if(res == 1) break;
    }

    if(res == 1) cout << "HARD";
    else cout << "EASY";

    return 0;
}