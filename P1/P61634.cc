
/* Anys de traspàs */

#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    if (y % 4 == 0 && y % 100 != 0 || 
       y % 100 == 0 && (y / 100) % 4 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

