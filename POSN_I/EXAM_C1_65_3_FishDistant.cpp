/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_3_FishDistant                     */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/03 by Makufff               */
/*   Updated: 2023/10/03 by Makufff               */
/*                                                */
/* ********************************************** */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m ; cin >> n >> m ;
    double Big_Fish=-2e9 , Big_Fishx , Big_Fishy ;
    double Small_Fish=2e9 , Small_Fishx , Small_Fishy ;
    for(int i=0 ; i<m ; i++){
        double x , y , w ;
        cin >> x >> y >> w;
        if(w > Big_Fish){
            Big_Fish = w;
            Big_Fishx = x;
            Big_Fishy = y;
        }
        if(w < Small_Fish){
            Small_Fish = w;
            Small_Fishx = x;
            Small_Fishy = y;
        }
    }
    cout << fixed << setprecision(6) << sqrt(((Big_Fishx-Small_Fishx)*(Big_Fishx-Small_Fishx))+((Big_Fishy-Small_Fishy)*(Big_Fishy-Small_Fishy)));

    return 0;
}