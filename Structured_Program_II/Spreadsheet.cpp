#include <iostream>

using namespace std;

int main(){
    int r, c, sum;
    cin >> r;
    cin >> c;
    int vec[r+1][c+1];

    for ( int row = 0; row < r; row++ ) {
        sum = 0;
        for ( int column = 0; column < c; column++ ) {
            cin >> vec[row][column];
            sum += vec[row][column];
        }
        vec[row][c] = sum; 
    }

    for ( int column = 0; column < c + 1; column++ ) {
        sum = 0;
        for ( int row = 0; row < r; row++ ) {
            sum += vec[row][column];
        }
        vec[r][column] = sum;
    }

    for ( int row = 0; row < r + 1; row++ ) {
        sum = 0;
        for ( int column = 0; column < c; column++ ) {
            cout << vec[row][column] << ' ';
        }
        cout << vec[row][c] << endl;
    }  
    return 0;
}