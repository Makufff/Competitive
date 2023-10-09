/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   TOI01_pattern                                */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/10 by Makufff               */
/*   Updated: 2023/10/10 by Makufff               */
/*                                                */
/* ********************************************** */

#include<bits/stdc++.h>
using namespace std;

int Pattern[50001][71];

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    int n; cin >> n;
    
    int Pattern_range=INT_MIN;
    for(int i=1;i<=n;i++){
        int p,q,r;
        cin >> p >> q >> r;
        Pattern_range = max(Pattern_range,p);
        for(int j=q;j<q+r and j<=70;j++) Pattern[p][j] = 1;
    }
    for(int i=1;i<=Pattern_range;i++){
        for(int j=1;j<=70;j++){
            if(Pattern[i][j] == 1) cout << 'x';
            else cout << 'o';
        }
        cout << "\n";
    }
    return 0;
}
