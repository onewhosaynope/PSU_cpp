/**
 * Пазов В.С.
 * Даны два круга с общим центром и радиусами R1 и R2 (R1>R2).
 * Найдите площади этих кругов S1 и S2, а также площадь S3 кольца, внешний радиус которого равен R1, а
 * внутренний радиус равен R2:
 * S1= Pi * R1
 * S2 = Pi * R2 * 2
 * S3 = S1 - S2
 * Pi = 3.14
 */

#include <iostream>

using namespace std;

int main() {
    const float Pi = 3.14;
    float R1, R2;
    cout << "Please, enter R1 and R2\n";
    cin >> R1;
    cin >> R2;
    cout << "R1 == " << R1 << "\nR2 == " << R2;
    float S1 = Pi * R1 * R1;
    float S2 = Pi * R2 * R2;
    float S3 = S1 - S2;
    cout << "\nS1 == " << S1 << "\nS2 == " << S2 << "\nS3 == " << S3;
    return 0;
}