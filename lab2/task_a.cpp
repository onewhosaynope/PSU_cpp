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
    ((check_a == true && check_b == false)||(check_a == false && check_b == true)) ? cout << "Only one number is even" : cout << "There's no even nubers or all of them are even";
}