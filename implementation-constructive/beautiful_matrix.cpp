#include<iostream>
using namespace std;

int main() {
    int num;
    int one_row, one_col;

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin >> num;
            if(num == 1) {
                one_row = i+1; 
                one_col = j+1;
            }
        }
    }

    int center_row = 3, center_col = 3;
    int moves = 0;

    while (one_row != 3 || one_col != 3)
    {
        //rows 
        if(one_row < center_row){
             one_row++;
             moves++;
        } else if (one_row > center_row) {
            one_row--;
            moves++;
        } 
        
        //columns
        if (one_col < center_col) {
            one_col++;
            moves++;
        } else if (one_col > center_col) {
            one_col--;
            moves++;
        } 
    }

    cout << moves;
    

    return 0;
}