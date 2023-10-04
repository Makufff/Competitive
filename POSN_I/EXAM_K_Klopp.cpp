/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_K_Klopp                            */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/04 by Makufff               */
/*   Updated: 2023/10/04 by Makufff               */
/*                                                */
/* ********************************************** */

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int mx = INT_MIN;
    int cnt = 1;

    while (n != 1) {
        cnt++;
        mx = max(mx, n);

        if (n % 2 == 0) {
            n = sqrt(n);
        } else {
            n = sqrt(n) * n;
        }
    }

    cout << mx << " " << cnt;

    return 0;
}
