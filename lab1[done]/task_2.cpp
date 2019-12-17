/**
 * Пазов В.С.
 * Дано трехзначное число.
 * Вывести вначале его поледнюю цифру (единицы), а затем - его среднюю цифру (десятки)
*/

#include <iostream>

using namespace std;

int main() {
    int number;
    int tens, units;
    cout << "\nEnter your integer number (99 < number < 999)" << endl;
    cin >> number;
    units = number % 10;
    tens = (number % 100)/10;
    cout << "\n Units == " << units << ", tens == " << tens;
}