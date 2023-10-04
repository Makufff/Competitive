/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_2_CarPark                         */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/04 by Makufff               */
/*   Updated: 2023/10/04 by Makufff               */
/*                                                */
/* ********************************************** */

#include<bits/stdc++.h>
using namespace std;

int main() {
    float hour_in, min_in, hour_out, min_out, time;
    cin >> hour_in >> min_in >> hour_out >> min_out;

    time = (min_out == 0) ? ((hour_out - hour_in - 1) * 60 + (60 - min_in))
         : (min_out < min_in) ? ((hour_out - hour_in - 1) * 60 + (min_out + 60 - min_in))
         : ((hour_out - hour_in) * 60 + (min_out - min_in));

    int fee = (time <= 15) ? 0
            : (time <= 180) ? ceil(time / 60) * 10
            : (time <= 360) ? ceil((time - 180) / 60) * 20 + 30
            : 200;

    cout << fee;

    return 0;
}
