#include <iostream>

using namespace std;

int main(){
  int W,H,x,y,r;
  cin >> W;
  cin >> H;
  cin >> x;
  cin >> y;
  cin >> r;

  if( ((W-x)>=r&&(H-y)>=r) && (x>=r&&y>=r) ){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
