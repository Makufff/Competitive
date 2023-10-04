/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_F_FibWord                               */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/03 by Makufff               */
/*   Updated: 2023/10/03 by Makufff               */
/*                                                */
/* ********************************************** */

#include<bits/stdc++.h>
using namespace std;

vector<int> fib(55);
char fiboo(int n,int k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(fib[n-2] < k) return fiboo(n-1,k-fib[n-2]);
    else return fiboo(n-2,k);
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t; cin >> t;

    fib[1] = 1;
    for(int i=2 ; i<=50 ; i++) fib[i] = fib[i-2] + fib[i-1];
    while(t--){
        int n,k; cin >> n >> k;
        cout << fiboo(n,k) << "\n";
    }
    
    return 0;
}