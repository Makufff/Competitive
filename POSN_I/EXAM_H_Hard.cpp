/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_H_Hard                                  */
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
    ios_base::sync_with_stdio(0), cin.tie(0);

    int n; cin >> n;
    int maximum = INT_MIN , minimum = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x;
        maximum = max(maximum,x);
        minimum = min(minimum,x);
    }

    cout << 2*maximum+minimum;

    return 0;
}