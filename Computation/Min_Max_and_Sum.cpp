#include <iostream>

using namespace std;

int main(void){
    long int n, min, max, sum;
    cin >> n;
    long int a[n];
    cin >> a[0];
    min = a[0];
    max = a[0];
    sum = a[0];

    for(int i=1;i<n; i++){
        cin >> a[i];

        if(min > a[i]){
            min = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
        sum += a[i];
    }
    cout << min << ' ' << max << ' ' << sum << endl;

}