
/* Majúscules i minúscules */

#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if(a < 'a') cout << char(a + ('a' - 'A')) << endl;
    else cout << char(a - ('a' - 'A')) << endl;
}

