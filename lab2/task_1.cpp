/**
 * Пазов В.С.
 * Даны два целых числа A и B.
 * Проверить истинность высказывания: 
 * "Ровно одно из чисел A и B нечетное"
 */

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter A and B\n";
    cin >> a;
    cin >> b;
    bool check_a = (a % 2 == 0);
    bool check_b = (b % 2 == 0);
    cout << boolalpha << ((check_a && (!check_b))||(check_b && (!check_a)));
}