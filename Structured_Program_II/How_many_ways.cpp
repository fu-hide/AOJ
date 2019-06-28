#include <iostream>

using namespace std;

int main(){
    int n, x, third, ans;
    while(1){
        cin >> n;
        cin >> x;
        //終了判定
        if ( n == 0 && x == 0 ) {
            break;
        }
        ans = 0;
        //全探索
        for ( int first = 1; first <= n; first++ ) {
            for ( int second = 1; second <= n; second++ ) {
                third = x - first - second;
                if ( (first == second) || (second == third) || (third == first) ) {
                    
                } else if (third > 0 && third <= n) {
                    ans++;
                }
            }
        }
        cout << ans / 3 / 2 << endl;
    }
    return 0;
}