/**
 * Пазов В.С.
 * String36 (работа с массивом символов)
 * Даны  строкиS, S1 и S2.
 * Заменить в строке S первое  вхождение
 * строки S1 на строкуS2.
 */


#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;
 
int main(){
    string S, S1, S2;

    cout << "S: ";
    getline(cin, S);
    cout << "S1: ";
    cin >> S1;
    cout << "S2: ";
    cin >> S2;

    istringstream ist(S); // https://en.cppreference.com/w/cpp/io/basic_istringstream
    list<string> list; // https://ru.cppreference.com/w/cpp/container/list

    copy(istream_iterator<string>(ist), istream_iterator<string>(), back_inserter(list));

    replace(list.begin(), list.end(), S1, S2);

    cout << "Result: ";
    copy(list.begin(), list.end(), ostream_iterator<string>(cout, " "));

    return 0;
}