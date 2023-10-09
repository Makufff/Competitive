/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   TOI01_nugget                                 */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/10 by Makufff               */
/*   Updated: 2023/10/10 by Makufff               */
/*                                                */
/* ********************************************** */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    int n; cin >> n;

    if(n < 6) cout << "no";
    else{
        vector<bool> chk(n+1,false);
        chk[0] = true;
        for(int i=0;i<=n;i++){
            if(chk[i]){
                if(i+6 <= n) chk[i+6] = true;
                if(i+9 <= n) chk[i+9] = true;
                if(i+20 <= n) chk[i+20] = true;
            }
        }
        for(int i=6;i<=n;i++){
            if(chk[i]) cout << i << "\n";
        }
    }
    
    return 0;
}