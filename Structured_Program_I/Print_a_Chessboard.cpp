#include <iostream>

using namespace std;

int main(){
    int H,W;
    while(1){
        cin >> H;
        cin >> W;
        if(H==0){
            break;
        }

        for(int i=0; i<H; i++){
            for(int j=0; j<W; j++){
                if((i+j)%2 == 0){
                    cout << '#';
                }else{
                    cout << '.';
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}