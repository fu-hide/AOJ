#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ ){
        int x = i;
        if ( x % 3 == 0 ){
            cout << " " << i;
        } else {
            while( x ){
                if ( x % 10 == 3 ){
                    cout << " " << i;
                    break;
                } else if ( x ){
                   x /= 10;
                } else {
                    break;
                }                     
            }
        }
    }
    cout << endl;
    return 0;
}