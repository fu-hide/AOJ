#include <iostream>

using namespace std;

int main(){
    int n, number;
    int S[14] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int H[14] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int C[14] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int D[14] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    char Pattern;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> Pattern;
        cin >> number;

        if ( Pattern == 'S' ) {
            S[number] = 100;
        } else if ( Pattern == 'H' ) {
            H[number] = 100;
        } else if ( Pattern == 'C' ) {
            C[number] = 100;
        } else {
            D[number] = 100;
        }
    }

    for ( int i = 1; i <= 13; i++) {
        if ( S[i] < 100 ) {
            cout << "S " << i << endl;
        }
    }
    for ( int i = 1; i <= 13; i++) {
        if ( H[i] < 100 ) {
            cout << "H " << i << endl;
        }
    }
    for ( int i = 1; i <= 13; i++) {
        if ( C[i] < 100 ) {
            cout << "C " << i << endl;
        }
    }
    for ( int i = 1; i <= 13; i++) {
        if ( D[i] < 100 ) {
            cout << "D " << i << endl;
        }
    }
    return 0;
}