
/* Control C101A */

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << (a % 10) + ((a % 100) / 10) + ((a % 1000) / 100) << endl;
}

