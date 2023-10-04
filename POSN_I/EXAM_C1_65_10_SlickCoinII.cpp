/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_10_SlickCoinII                    */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/04 by Makufff               */
/*   Updated: 2023/10/04 by Makufff               */
/*                                                */
/* ********************************************** */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int n, ans = 0;
    cin >> n;
    int arr[n + 5];
    arr[0] = 2e9;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
        if (arr[i - 1] < arr[i]) ans += arr[i] - arr[i - 1];
    }

    cout << ans;

    return 0;
}
