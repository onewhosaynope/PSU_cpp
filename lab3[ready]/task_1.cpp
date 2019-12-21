/**
 * Пазов В.С.
 * Дано целое число N(>10).
 * Найти сумму N2 + (N + 1)2 + (N + 2)2 + ... + (2*N)2
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, sum;

    cout << "Enter N\n";
    cin >> N;
    sum = 0;

    for (int i = 0; i < 2*N; i++) {
        sum += pow(N + i, 2);
    }

    cout << "Sum: " << sum;
    
    return 0;
}
