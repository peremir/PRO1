
/* Elementos */

#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if(a == b) cout << "-" << endl;
    else if(a == 'A' && b == 'P') cout << 1 << endl;
    else if(a == 'P' && b == 'V') cout << 1 << endl;
    else if(a == 'V' && b == 'A') cout << 1 << endl;
    else cout << 2 << endl;
}

