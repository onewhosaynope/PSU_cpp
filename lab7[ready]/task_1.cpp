/**
 * Пазов В.С.
 * String36 (работа со строкой)
 * Даны  строкиS, S1 и S2.
 * Заменить в строке S первое  вхождение
 * строки S1 на строкуS2.
 */


#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string S, S1, S2;
    cout << "Enter S: " << endl;
    getline(cin, S);
    cout << "Enter S1: " << endl;
    getline(cin, S1);
    cout << "Enter S2: " << endl;
    getline(cin, S2);

    // http://www.cplusplus.com/reference/string/string/replace/
    S.string::replace(S.string::find(S1), S1.string::length(), S2);

    cout << S;
return 0;
}