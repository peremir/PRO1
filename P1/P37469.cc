
/* Descomposició horària (1) */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h = n / 3600;
    int m = (n % 3600) / 60;
    int s = n - ((h * 3600)+(m * 60));
    cout << h << " " << m << " " << s << endl;
}

