#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n , inputs , cnt = 0 , maximum = -2e9 ; 
    int table[1001];
    do{
        cin >> inputs ;
        table[cnt] = inputs;
        cnt++;
    }while(inputs != 0) ;
    for (int i = 0 ; i < cnt ; i++){
        // cout << table[i] << " " ;
        for (int j = i+1 ; j < cnt ; j++){
            if (abs(table[i] - table[j]) > maximum) maximum = abs(table[i] - table[j]) ;
        }
    }
    cout << maximum ;
    return 0 ;
}