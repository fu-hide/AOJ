#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long double a, b;
    cin >> a;
    cin >> b;
    
    cout<< int(a)/int(b) << " " << int(a)%int(b) << " ";
    cout << setprecision(5) << fixed << a/b << endl;

    return 0;
}