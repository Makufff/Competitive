/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_1_Sum                             */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/04 by Makufff               */
/*   Updated: 2023/10/04 by Makufff               */
/*                                                */
/* ********************************************** */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ; cin >> n ;
    int sum = 0 , input ; 
    for (int i = 0 ; i < n ; i++) {
        cin >> input ;
        sum += input ;
    }
    cout << sum << "\n" ;
    return 0;
}