// String27. 
// Даны целые положительные числа N1 и N2 и строки S1 и S2. 
// Получить из этих строк новую строку, 
// содержащую первые N1 символов строки S1 и 
// последние N2 символов строки S2 (в указанном порядке).

#include <iostream>

using namespace std;


int main() {
    string S1;
    string S2;
    string result1;
    string result2;
    int N1;
    int N2;

    cout << "Enter S1: \n";
    cin >> S1;
    cout << "Enter S2: \n";
    cin >> S2;
    cout << "Enter N1: \n";
    cin >> N1;
    cout << "Enter N2: \n";
    cin >> N2;

    for (int i = 0; i < N1; i++) {
        result1 = result1 + S1[i];
    }

    for (int i = S2.length() - N2; i < S2.length(); i++) {
        result2 = result2 + S2[i];
    }

    cout << result1 + result2;

    return 0;
}