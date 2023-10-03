#include <iostream>
using namespace std;
int main() {
    int money;
    int B1000,B500,B100;
    cin>>money;
    B1000 = money/1000;
    money%=1000;
    B500 = money/500;
    money%=500;
    B100 = money/100;
    (B100 != 0) ? cout << "100 : " << B100 << "\n" : cout << "" ;
    (B500 != 0) ? cout << "500 : " << B500 << "\n" : cout << "" ;
    (B1000 != 0) ? cout << "1000 : " << B1000 << "\n" : cout << "" ;
    return 0;
}