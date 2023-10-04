/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_5_CubePattern                     */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/03 by Makufff               */
/*   Updated: 2023/10/03 by Makufff               */
/*                                                */
/* ********************************************** */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = -n + 1; i < n; i++) {
        for (int j = -n + 1; j < n; j++) {
            char output = (i == -n + 1 && j >= 0) || (i < 0 && (-i == j || i + j == -n + 1)) ||
                (i == 0 && j <= 0) || (i <= 0 && j == n - 1) ||
                (i > 0 && i + j == n - 1) || (i >= 0 && (j == -n + 1 || j == 0)) ||
                (i == n - 1 && j <= 0) ? '*' : (i > 0 && i + j >= n) ? ' ' : '-';
            cout << output;
        }
        cout << "\n";
    }

    return 0;
}
