// BUG: something is wrong with this code, fix tomorrow

#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--) {
        int a, b, n;
        cin >> a >> b >> n;

        int steps = 0;

        while(a <= n && b <= n) { // any one false and this fails, less cases, || waits for both to be greater than n
            if(steps % 2 == 0) a += b;
            else b += a;

            steps++;
        }
        
        cout << steps << endl;
    }

    return 0;
}