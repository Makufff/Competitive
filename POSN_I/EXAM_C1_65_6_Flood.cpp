/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_6_Flood                           */
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
    int n; cin >> n;
    int walls[n] ;
    int high=-2e9 , IDX;

    for(int i=0;i<n;i++){
        cin >> walls[i];
        if(walls[i]>high){
            high = walls[i];
            IDX = i;
        }
    }

    int maximum = walls[0];
    for(int i=0;i!=IDX;i++){
        cout << maximum << " ";
        maximum = max( maximum , walls[i+1] );
    }

    vector<int> vec;
    maximum = walls[n-1];
    for( int i= n-1 ; i!=IDX ; i-- ){
        vec.push_back( maximum );
        maximum = max( maximum , walls[i-1] );
    }

    for( int i=vec.size()-1 ; i>=0 ; i-- ) cout << vec[i] << " ";

    return 0;
}