
/* Classificació de caràcters (1) */

#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if(a < 'a') cout << "uppercase" << endl;
    else cout << "lowercase" << endl;
    if(a == 'a' or a == 'e' or 
       a == 'i' or a == 'o' or 
       a == 'u' or a == 'A' or 
       a == 'E' or a == 'I' or 
       a == 'O' or a == 'U') {
        cout << "vowel" << endl;
    }
    else cout << "consonant" << endl;
}

