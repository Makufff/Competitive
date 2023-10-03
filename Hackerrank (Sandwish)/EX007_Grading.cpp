#include <iostream>
using namespace std;
int main() {
    int geb , mid , finals ; cin >> geb >> mid >> finals;
    (geb + mid + finals >= 80) ? cout << 'A' : (geb + mid + finals >= 70) ? cout << 'B' : (geb + mid + finals >= 60) ? cout << 'C' : (geb + mid + finals >= 50) ? cout << 'D' : cout << 'F' << " " << 50 - geb - mid - finals ;
    return 0 ;
}