/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_4_ISBN                            */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/04 by Makufff               */
/*   Updated: 2023/10/04 by Makufff               */
/*                                                */
/* ********************************************** */

#include<bits/stdc++.h>
using namespace std;

int main(){
    string ISBN; cin >> ISBN;
    int digit = 10 , n10 = 0;
    for(char x : ISBN){
        n10 += (int(x) - 48) * digit;
        digit--;
    }
    cout << ISBN << 11-n10%11;

    return 0;
}