#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int minCapacity = 0, netPassengers = 0;

    for(int i=1; i<=n; i++) {
        int a,b;
        cin >> a >> b;
        if(i == 1) {
            minCapacity = b;
            netPassengers = b;
            continue;
        }
        netPassengers = netPassengers - a + b;
        minCapacity = max(netPassengers, minCapacity);
    }

    cout << minCapacity << endl;

    return 0;
}