/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   TOI01_roman                                  */
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

    int d; cin >> d;
    int i=0,v=0,x=0,l=0,c=0;
    for(int k=1;k<=d;k++){
        int n=k;
        
        while(n>0){
            if(n >= 100){c++ ; n -= 100;
            }else if(n >= 90){c++ ;x++ ; n -= 90;
            }else if(n >= 50){l++ ;n -= 50;
            }else if(n >= 40){l++ ;x++ ;n -= 40;
            }else if(n >= 10){x++ ;n -= 10;
            }else if(n >= 9){x++ ;i++ ;n -= 9;
            }else if(n >= 5){v++ ;n -= 5;
            }else if(n >= 4){v++ ;i++ ;n -= 4;
            }else{i++ ;n -= 1;
            }
        }
    }

    cout << i << " " << v << " " << x << " " << l << " " << c;

    return 0;
}