
/* Quants segons són? */

#include <iostream>
using namespace std;

int main() {
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    s = s + (m * 60) + (h * 3600) + (d * 86400) + (y * 31536000);
    cout << s << endl;
}

