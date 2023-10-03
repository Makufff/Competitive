#include <iostream>
using namespace std;
int main(){
    int start , stop , step ; cin >> start >> stop >> step ;
    for(int i = start; i < stop; i += step) cout << i << " " ;
    return 0;
}