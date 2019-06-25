#include <iostream>

using namespace std;

int main(){
    int n,b,f,r,v;
    int building[4][3][10] = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b;
        cin >> f;
        cin >> r;
        cin >> v;
        building[b-1][f-1][r-1] += v;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " ";
            for (int k = 0; k < 10 - 1; k++) {
                cout << building[i][j][k] << " ";
            }
            cout << building[i][j][10-1] << endl;
        }
        if( i < 3 ) {
            cout << "####################" << endl;
        }
    }

    return 0;
}