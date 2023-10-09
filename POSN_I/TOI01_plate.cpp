/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   TOI01_plate                                  */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/10 by Makufff               */
/*   Updated: 2023/10/10 by Makufff               */
/*                                                */
/* ********************************************** */

#include <bits/stdc++.h>
using namespace std;

queue<int> que;
queue<int> cq[11];
int clsinq[11];
int arr[10001];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int nc,ns,c,s,x;
    char opr;
    cin >> nc >> ns;
    while(ns--){
        cin >> c >> s;
        arr[s] = c;
    }
    while(1){
        cin >> opr;
        if(opr == 'X'){cout << "0"; return 0;}
        if(opr == 'E'){
            cin >> x;
            if(cq[arr[x]].empty()){
                cq[arr[x]].push(x);
                que.push(arr[x]);
            }
            else cq[arr[x]].push(x);
        }
        else{
            if(!que.empty()){
                int y = que.front();
                cout << cq[y].front() << "\n";
                cq[y].pop();
                if(cq[y].empty()) que.pop();
            }
        }
    }
    return 0;
}