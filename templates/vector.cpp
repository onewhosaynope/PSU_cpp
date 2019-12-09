#include <iostream>
#include <cstdlib>

using namespace std;

void array_fill(int* M,int n);  // ввод массива
void array_print(int* M,int n);   // вывод массива
void array_rand(int* M,int n);   // заполнение массива случайными числами
int solution(int* M,int n);   // пример обработки массива


int main() {
    int n;
    cout << endl << "Array size [N]:" << endl;
    cin >> n;
    int* A = new int[n];
    array_fill(A, n);
    array_rand(A, n);
    array_print(A, n); 
    int result = solution(A, n);
    cout << "Summa = " << result << endl;
    delete[] A;
    return 0;
}


void array_fill(int* M, int n) {
    for(int i = 0; i < n; i++) {
        cout << "M[" << i << "]";
            cin >> M[i];
    }
}


void array_rand(int* M, int n) {
    for(int i = 0; i < n; i++)
    {
        M[i] = rand() % 100;
    }
}


void array_print(int* M, int n) {
    for(int i = 0; i < n; i++) {
        cout << M[i]<< " ";
    }
    cout << endl;
}


void solution(int M[], int n, int k) {
    // work with array here
} 