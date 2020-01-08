/**
 * Пазов В.С.
 * String36 (работа с массивом символов)
 * Даны  строки S, S и S1.
 * Заменить в строке S вхождения
 * строки S1 на строку S2.
 */


#include <iostream>
#include <cstring>

using namespace std;
int main() {

char s[255]; 
char s1[255]; 
char s2[255];
char *p;

cout << "Enter S:" << endl;
cin >> s;
cout << "Enter S1:" << endl;
cin >> s1;
cout << "Enter S2:" << endl;
cin >> s2;


// http://www.cplusplus.com/reference/cstring/strstr/
p = strstr(s, s1);
if (p) {
    strncpy(p, s2, strlen(s2));
    puts(s);
}
cout << "Result: " << endl << s;
}