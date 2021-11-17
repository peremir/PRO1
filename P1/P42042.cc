
/* Classificació de caràcters (1) */

#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if(a < 'a') cout << "uppercase" << endl;
    else cout << "lowercase" << endl;
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        cout << "vowel" << endl;
    }
    else cout << "consonant" << endl;
}

