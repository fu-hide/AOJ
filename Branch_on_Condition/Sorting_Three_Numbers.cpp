#include <iostream>

using namespace std;

int main(){
    int a,b,c,tmp;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a > b){
      tmp = b;
      b = a;
      a = tmp;
    }

    if(b > c){
      tmp = c;
      c = b;
      b = tmp;
    }

    if(a > b){
      tmp = b;
      b = a;
      a = tmp;
    }

    cout << a << ' ' << b << ' ' << c << endl;
    return 0;
}
