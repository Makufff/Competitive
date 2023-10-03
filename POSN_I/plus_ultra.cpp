/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*    PLUS UNLIMITE                               */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/03 by Makufff               */
/*   Updated: 2023/10/03 by Makufff               */
/*                                                */
/* ********************************************** */
/* *****************  IDEA  ********************* */
/*

    เราจะเห็นจากโจทย์ว่าขอบเขตที่โจทย์ให้มีคือเลขไม่เกิน 2^99
    ซึ่งมากกว่า int , long int , long long int , unsigned long long int แน่นอน!!
    งั้นเราคิดใหม่ (?)
    ถ้าเราวิธีคิดที่เป็นการบวกเลขตอนประถมละ (?)
    มาดูๆๆ เช่น 9999 + 9999 = (?)
    เริ่มต้นเราตั้งเลขก่อน
    9999
    9999 +
    
    เอาตัวหลังสุดบวก 9 + 9 = 18
    ทด 1 ใส่ 8
      1
    9999
    9999 +
       8

    ต่อมา 9 + 9 + ทด 1 = 19
    ใส่ 9 ทด 1
     11
    9999
    9999 +
      98

    ต่อมา 9 + 9 + ทด 1 = 19
    ใส่ 9 ทด 1
    111
    9999
    9999 +
     998

    ต่อมา 9 + 9 + ทด 1 = 19
    ใส่ 9 ทด 1
   1111
    9999
    9999 +
    9998
    
    ต่อมา 0 + 0 + ทด 1 = 1
    ใส่ 1
   1111
    9999
    9999 +
   19998

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0) ;
    string a , b ;
    // b = "12345"
    cin >> a >> b ;
    if (a.length() > b.length()){
        string tmp = "" ; 
        for (int i = b.length(); i < a.length(); i++){
            tmp += "0" ;
        }
        for (char i : b){ //for each
            tmp += i ;
        }
        b = tmp ;
    }else if (a.length() < b.length()){
        string tmp = "" ; 
        for (int i = a.length(); i < b.length(); i++){
            tmp += "0" ;
        }
        for (char i : a){
            tmp += i ;
        }
        a = tmp ;
    }
    // cout << a << "\n" << b << "\n" ; // check 

    // PLUS ULTRA
    int tod = 0 ;
    string ans = "" ;
    for (int i = a.length() - 1 ; i >= 0  ; i--){
        int sum , r ; 
        sum = (int(a[i]) - 48) + (int(b[i]) - 48) + tod ;
        // cout << "a.i =" << int(a[i]) - 48 << "\n" ;
        // cout << "b.i =" << int(b[i]) - 48 << "\n" ;
        // cout << "tod =" << tod << "\n" ;
        // cout << "sum =" << sum << "\n" ;
        
        if (sum > 9 and i != 0) {
            tod = sum/10 ; 
            r = sum - (tod * 10) ;
            ans += to_string(r) ;
            
        }else if (i == 0 and sum > 9){
            string str_sum = to_string(sum) ;
            for (int i = str_sum.length() - 1 ; i >=0 ; i--){
                ans += to_string(int(str_sum[i]) - 48);
            }
        }else {
            ans += to_string(sum);
        }
    }

    for (int i = 0; i < ans.length() / 2; i++)
        swap(ans[i], ans[ans.length() - i - 1]);

    // 89991
    // 1   8
    // 19 98
    // 19998

    cout << ans ;
    return 0 ; 
}