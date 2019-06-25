#include <iostream>

using namespace std;

int main(void){
    int a, b;
    char op;

    while(1){
        cin >> a;
        cin >> op;
        cin >> b;

        if(op=='+'){
            cout << a + b << endl;
        }else if(op=='-'){
            cout << a - b << endl;
        }else if(op=='*'){
            cout << a * b << endl;
        }else if(op=='/'){
            cout << a / b << endl;
        }else{
            break;
        }
        
    }

}
