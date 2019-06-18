#include <iostream>

using namespace std;

int main(){
    int a, b, c, divisor = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    for(int i = a; i <= b; i++){
        if(c%i == 0){
            divisor++;
        }
    }
    cout << divisor << endl;

}