#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , s , nurse = 7  ; cin >> n ; 
    int hospital = 0 , outdoor = 0 ; 
    while (n--){
        cin >> s ; 
        if (s > nurse){
            hospital += 7 ;
            outdoor += nurse - 7 ;
            nurse ++ ;
        }else hospital += nurse ;
    }
    cout << hospital << "\n" << outdoor ; 
}