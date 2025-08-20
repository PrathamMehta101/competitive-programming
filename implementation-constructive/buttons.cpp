#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // finding first number
        // n times worst case scenario + n - 1 times (n-1*0)
    // finding second number 
        // n - 1 times worst case scenario + n - 2 clicks for first number (n-2*1)
    // finding third number 
        // n - 2 times worst case scenario + n - 3 times click for first and second number (n-3*2)
    // finding fourth number 
        // n- 3 times + (n-4*3)
    // ...
    // n - i + (n - i - 1 * numbersFound)
    
    int numbersFound = 0;
    int presses = 0;

    for(int i = 0; i < n; i++) {
        presses += (n - i) + (n - i - 1) * numbersFound; 
        numbersFound++;
    }

    cout << presses << endl;
}