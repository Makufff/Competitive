/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_C1_65_9_SlickCoinI                      */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/04 by Makufff               */
/*   Updated: 2023/10/04 by Makufff               */
/*                                                */
/* ********************************************** */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int minimum = 2e9, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        minimum = min(minimum, arr[i]);
        ans = max(ans, arr[i] - minimum);
    }
    cout << ans;

    return 0;
}