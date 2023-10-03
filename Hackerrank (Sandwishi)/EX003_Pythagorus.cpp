#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(6) << sqrt(a * a + b * b);
    return 0;
}
