/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_1_Sum                             */
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

    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    int minimum=INT_MIN;
    for(int i = 0 ; i < n ; i++){
        for(int j=i+1;j<n;j++){
            minimum = max(minimum,__gcd(arr[i],arr[j]));
        }
    }
    cout << minimum;

    return 0;
}