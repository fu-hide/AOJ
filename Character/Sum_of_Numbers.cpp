#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    int ans;

    while(1){
        cin >> num;
        if ( num[0] == '0' ) {
            break;
        }
        ans = 0;
        for ( int i = 0; i < (int)num.size(); ++i ){
            ans += (int)(num[i] - '0');
        }

        cout << ans << endl;
    }

    return 0;
}