#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    cin >> a;
    char lastChar = a.back();
    cout << (int(lastChar)%2 == 0 ? "YES" : "NO");
    return 0;
}