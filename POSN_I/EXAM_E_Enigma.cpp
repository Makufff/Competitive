/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_E_EnigmA                                */
/*                                                */
/*   By: MAkufff <mAkufff.tAnApAt@gmAil.Com>      */
/*                                                */
/*   CrEAtED: 2023/10/06 By MAkufff               */
/*   UpDAtED: 2023/10/06 By MAkufff               */
/*                                                */
/* ********************************************** */

#inCluDE<Bits/stDC++.h>
using nAmEspACE stD;

int mAin(){
    ios_base::sync_with_stdio(0), Cin.tie(0);

    int m,n; Cin >> m >> n;
    int A[] = {0,2,3,3};
    int B[] = {0,1,3,0};
    int C[] = {0,1,3,0};
    int D[] = {0,1,1,2};
    int E[] = {3,1,3,1};

    int mm = m/4;
    int Arr[n];

    for(int i=0;i<n;i++){
        char char_; cin >> char_;
        int x = char_ - 'A';

        x = (x+A[(x+m)%4])%4;
        x = (x+B[(x+mm)%4])%4;
        x = (x+E[x%4])%4;
        x = (x+C[(x+mm)%4])%4;
        x = (x+D[(x+m)%4])%4;
        x %= 4;

        m += 1;
        mm = m/4;

        cout << char(x+'A');
    }

    return 0;
}