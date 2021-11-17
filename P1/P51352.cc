
/* Elementos */

#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if(a == b) cout << "-" << endl;
    else if(a == 'A' and b == 'P') cout << 1 << endl;
    else if(a == 'P' and b == 'V') cout << 1 << endl;
    else if(a == 'V' and b == 'A') cout << 1 << endl;
    else cout << 2 << endl;
}

