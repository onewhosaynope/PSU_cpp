/**
 * Пазов В.С.
 * Array27
 * Дан массив ненулевых целых чисел размера N. 
 * Проверить, чередуются ли в нем положительные и отрицательные числа. 
 * Если чередуются, то вывести 0, если нет, 
 * то вывести порядковый номер первого элемента, нарушающего закономерность. 
 */


#include <iostream>

using namespace std;


void array_fill(int* M, int n);
void array_print(int* M, int n);
int solution(int* M, int n);


int main() {
    int n;
    
    cout << endl << "Array size [N]:" << endl;
    cin >> n;

    int* A = new int[n];
    
    cout << endl << "Enter array values:" << endl;
    array_fill(A, n);

    cout << endl << "Values of array:" << endl;
    array_print(A, n); 
    
    cout << endl << "Processing array" << endl;
    int s = solution(A, n);
    
    cout << endl << "Result: " << s << endl;
    
    delete[] A;
    return 0;
}

void array_fill(int* M, int n) {
    for(int i = 0; i < n; i++) {
        cout << "M[" << i << "] : ";
            cin >> M[i];
    }
}


void array_print(int* M, int n) {
    for(int i = 0; i < n; i++) {
        cout << M[i]<< " ";
    }
    cout << endl;
}


int solution(int* M, int n) {
    int result = 0;
    
    for (int i = 1; i < n; i++) {
        if ((M[i] < 0 && M[i - 1] > 0)) {
            result = i;
            cout << "breaking at M[" << result << "] with value " << M[i]; 
            break;
        }
    }
    
    return result;

}