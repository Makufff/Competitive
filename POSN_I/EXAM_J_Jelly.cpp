/* ********************************************** */
/* POSN CAMP 1                                    */
/*                                                */
/*   EXAM_J_Jelly                                 */
/*                                                */
/*   By: Makufff <makufff.tanapat@gmail.com>      */
/*                                                */
/*   Created: 2023/10/04 by Makufff               */
/*   Updated: 2023/10/04 by Makufff               */
/*                                                */
/* ********************************************** */

#include <bits/stdc++.h>
using namespace std;

bool canDistributeCandies(string s, int K) {
    int colorCount[26] = {0};
    int distinctColors = 0;

    for (char c : s) colorCount[c - 'a']++;

    for (int i = 0; i < 26; i++) {
        if (colorCount[i] > 0) distinctColors++;
    }

    if (distinctColors < K) return false;

    int maxCandiesPerChild = s.size() / K;

    for (int i = 0; i < 26; i++) {
        if (colorCount[i] > maxCandiesPerChild) return false;
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N, K;
        string s;
        cin >> N >> K >> s;
        (canDistributeCandies(s, K)) ? cout << "YES" << "\n" : cout << "NO" << "\n" ;
    }

    return 0;
}

