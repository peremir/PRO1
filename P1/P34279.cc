
/* Suma d'un segon */

#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;
    s = 1 + s + (m * 60) + (h * 3600);
    h = (s / 3600) % 24;
    m = (s % 3600) / 60;
    s = s % 60;
    
    cout << h / 10 << h % 10 << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10 << endl;
}

