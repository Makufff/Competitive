/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   TOI02_word                                   */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/10 by Makufff               */
/*   Updated: 2023/10/10 by Makufff               */
/*                                                */
/* ********************************************** */


#include <bits/stdc++.h>
using namespace std;
int di[8]={-1,-1,0,1,1,1,0,-1}; 
int dj[8]={0,1,1,1,0,-1,-1,-1};
char word[26][26];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0) ;
    string qs;
    int n,m,q,ch=0,length,cnt=0;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> word[i][j];
        }
    }
    cin >> q;
    while(q--){
        ch=0;
        cnt=0;
        cin >> qs;
        length = qs.size();
        for(int i=0;i<n && ch == 0;i++){
            for(int j=0;j<m && ch == 0;j++){
                if(toupper(word[i][j]) == toupper(qs[0]) && ch == 0){
                    for(int k=0;k<8 && ch == 0;k++){
                        cnt = 1;
                        int ii =i,jj=j;
                        for(int l=1;l<length;l++){
                            ii+=di[k];
                            jj+=dj[k];
                            if(ii >= n || ii < 0 || jj >=m || jj< 0) continue;
                            if(toupper(word[ii][jj]) != toupper(qs[l])) continue;
                            cnt++;
                        }
                        if(cnt == length){
                            cout << i << " " << j << "\n";
                            ch = 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}