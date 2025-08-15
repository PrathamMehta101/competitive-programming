#include<iostream>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int middle;
    
    if((x1 > x2 && x1 < x3) || (x1 > x3 && x1 < x2))
        middle = x1;
    else if((x2 > x1 && x2 < x3) || (x2 > x3 && x2 < x1)) 
        middle = x2;
    else 
        middle = x3;

    int min_dist = abs(x3 - middle) + abs(x2 - middle) + abs(x1 - middle);
    cout << min_dist;

    return 0;
}