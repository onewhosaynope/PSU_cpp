/**
 * Пазов В.С.
 * Matrix57
 * Дана матрица размера M×N (M и N — четные числа). 
 * Поменять местами левую верхнюю и правую нижнюю четверти матрицы.
 */


#include <iostream>
using namespace std;


int** matrix_init(int n, int m);
void matrix_clean(int** M, int n);
void matrix_fill(int** M, int n, int m);
void matrix_print(int** M, int n, int m);
void Solution(int** M, int n, int m);


int main() {
    int n, m;
    cout << "Number of lines for matrix:" << endl;
    cin >> n;
    cout << "Number of columns for matrix:";
    cin >> m;
    int** A = matrix_init(n, m);
    matrix_fill(A, n, m);
    cout << "MATRIX: " << endl;
    matrix_print(A, n, m);
    cout << "RESULT: " << endl;
    Solution(A, n, m);
    matrix_clean(A, n);
    return 0;
}


int** matrix_init(int n, int m) {
    int** M = new int*[n];
    for(int i = 0; i < n; i++) {
        M[i] = new int[m];
    }
    return M;
}


void matrix_clean(int** M, int n) {
    for(int i = 0; i < n; i++)
        delete[] M[i];
    delete[] M;
}


void matrix_fill(int** M, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << "M[" << i << "][" << j << "] : ";
            cin >> M[i][j];
        }
    
    }
}


void matrix_print(int** M, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}


void Solution(int** M, int n, int m) {
int k = (n + 1) / 2;
  int l = (m + 1) / 2;
  for (int i = 0; i < n / 2; i++)
  {
    for (int j = 0; j < m / 2; j++)
    {
      int temp = M[i][j];
      M[i][j] = M[i + k][j + l];
      M[i + k][j + l] = temp;
    }
  }
  matrix_print(M, n, m);
}