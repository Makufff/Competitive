/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_I_Integer                               */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/06 by Makufff               */
/*   Updated: 2023/10/06 by Makufff               */
/*                                                */
/* ********************************************** */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t; cin >> t;
    while(t--){
        double x; cin >> x;
        if(x == int(x)) cout << "OK\n";
        else cout << "NOT INTEGER\n";
    }

    return 0;
}