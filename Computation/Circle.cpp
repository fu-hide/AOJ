#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long double r;
    cin >> r;
    
    cout<< setprecision(6) << fixed << r*r*M_PI << " " << 2*r*M_PI << endl;

    return 0;
}
