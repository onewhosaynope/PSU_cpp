/**
 * Пазов В.С.
 * Робот может перемещаться в четырех направлениях
 * ("С" - Север, "З" - Запад, "Ю" - Юг, "В" - Восток) 
 * и принимать три цифровые команды:
 * 0 - продолжать движение, 1 - поворот направо, 2 - поворот на 180 градусов.
 * Дан символ C - исходная ориентация локатора и целые числа N1 и N2 - две посланные команды.
 * Вывести ориентацию локатора после выполнения этих команд.
*/

#include <iostream>

using namespace std;


char orient_controller(char S, int N) {

    switch (N)
    {
    case 0:
        switch(S) {
            case 'N': S = 'E'; break;
            case 'S': S = 'W'; break;
            case 'W': S = 'N'; break;
            case 'E': S = 'S'; break;
        }
        break;
    case 1:
        switch(S) {
            case 'N': S = 'E'; break;
            case 'S': S = 'W'; break;
            case 'W': S = 'N'; break;
            case 'E': S = 'S'; break;
        }
        break;
    case 2:
        switch(S) {
            case 'N': S = 'S'; break;
            case 'S': S = 'N'; break;
            case 'W': S = 'E'; break;
            case 'E': S = 'W'; break;
        }
        break;
    }

    cout << "New orientation: " << S;
    cout << endl;

    return(S);
}


int main() {

    char S;
    int N;

    cout << "Directions:\nN - North\nS - South\nW - West\nE - East";
    cout << endl;
    cout << "Commands:\n0 - do not change orientation\n1 - rotate to the right\n2 - turn around";
    cout << endl;

    cout << "Enter orientation: ";
    cin >> S;
    cout << "Orientation: " << S;
    cout << endl;

    cout << "Enter first command: ";
    cin >> N;
    cout << "First command: " << N;
    cout << endl;
    S = orient_controller(S, N);

    cout << "Enter second command: ";
    cin >> N;
    cout << "Second command: " << N;
    cout << endl;

    S = orient_controller(S, N);

    return 0;
}


