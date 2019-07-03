#include <iostream>
#include <string>

using namespace std;

int main(){
    int i = 0;
    string str;
    getline(cin, str);

    while(str[i]) {
         if( isupper( str[i] ) != 0 ) {
             cout <<  char(str[i] + 0x20);
         } else if ( islower( str[i] ) != 0 ){
             cout << char(str[i] - 0x20);
         } else {
             cout << str[i];
         }
        i++;
    }
    cout << endl;
    return 0;
}