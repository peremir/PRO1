
/* Màxim de tres enters */

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b) {
        if(c < b) cout << b << endl;
        else cout << c << endl;
    }
    else if(c < a) cout << a << endl;
         else cout << c << endl;
}

