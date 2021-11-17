
/* Arrodoniments */

#include <iostream>
using namespace std;

int main() {
    double a;
    cin >> a;
    cout << int(a) << ' ';
    double b = a - int(a);
    if(b == 0) cout << int(a) << ' ';
    else cout << int(a + 1) << ' ';
    if(b >= 0.5) cout << int(a + 1) << endl;
    else cout << int(a) << endl;
}

