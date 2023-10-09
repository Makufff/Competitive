/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   TOI01_chain                                  */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/10 by Makufff               */
/*   Updated: 2023/10/10 by Makufff               */
/*                                                */
/* ********************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int l,n;
    cin >> l >> n;
    string s1,s2;
    cin >> s1;
    for(int i=1;i<n;i++){
        cin >> s2;
        int cnt = 0;
        for(int j=0;j<l;j++){
            if(s1[j]!=s2[j])cnt++;
            if(cnt>2)break;
        }
        if(cnt>2){
            cout << s1;
            return 0;
        }
        s1=s2;
    }
    cout << s1;
}