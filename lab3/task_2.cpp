/**
 * Пазов В.С.
 * While12◦ . 
 * Дано целое число N (> 1). 
 * Вывести наибольшее из целых чисел K, 
 * для которых сумма 
 * 1 + 2 + . . . + K 
 * будет меньше или равна N, 
 * и саму эту сумму.
 */

#include <iostream>

using namespace std;

int main() {

    int n, k, sum;

    cout << "Enter N (>1):\n";
    cin >> n;

    k = 1;
    sum = 1;

    while (sum + k + 1 <= n) {
        ++k;
        sum = sum + k;
    }

    cout << "K:\n" << k << "\n";
    cout << "SUM:\n" << sum << "\n";
    
    return 0;
}
