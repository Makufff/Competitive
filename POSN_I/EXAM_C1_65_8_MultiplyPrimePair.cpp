/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_8_MultiplyPrimePair               */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/03 by Makufff               */
/*   Updated: 2023/10/03 by Makufff               */
/*                                                */
/* ********************************************** */

#include<bits/stdc++.h>
using namespace std;

vector<int> Prime;

void seive(int n){
    bool Is_Prime[n+1];
    memset(Is_Prime,true,n+1);
    Is_Prime[0] , Is_Prime[1] = false;
    for(int i=2;i<=n;i++){
        if(Is_Prime[i]){
            Prime.push_back(i);
            for(int j=i*2;j<=n;j+=i) Is_Prime[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    int k;
    seive(100000);
    for(int i;i<t;i++){
        cin >> k;
        int minimum = 2e9;
        for(int i=0;i<Prime.size()/2;i++){
            for(int j=i+1;j<Prime.size();j++){
                if(Prime[i]*Prime[j] >= k){
                    minimum = min(minimum,Prime[i]*Prime[j]);
                }
            }
        }
        cout << minimum << "\n";
    }

    return 0;
}