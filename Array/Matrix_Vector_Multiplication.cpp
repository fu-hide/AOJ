#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, ans;
    cin >> n;
    cin >> m;
    int vector1[n][m];
    int vector2[m];

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < m; j++ ) {
            cin >> vector1[i][j];
        }
    }

    for ( int i = 0; i < m; i++ ) {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        ans = 0;
        for (int j = 0; j < m; j++) {
            ans += vector1[i][j] * vector2[j];
        }
        cout << ans << endl;
    }

    return 0;
}