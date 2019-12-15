/**
 * Пазов В.С.
 * Matrix26
 * Дана матрица размера M×N.
 * Найти номер ее столбца с наименьшим произведением элементов 
 * и вывести данный номер, а также значение наименьшего произведения.
 */


#include <iostream>
using namespace std;


int** matrix_init(int n, int m);
void matrix_clean(int** M, int n);
void matrix_fill(int** M, int n, int m);
void matrix_print(int** M, int n, int m);
void Solution(int** M, int n, int m);
int multColumn(int**M, int n, int column);


int main() {
    int n, m;
    cout << "Number of lines for matrix:" << endl;
    cin >> n;
    cout << "Number of columns for matrix:" << endl;
    cin >> m;
    int** A = matrix_init(n, m);
    matrix_fill(A, n, m);
    cout << "Matrix:" << endl;
    matrix_print(A, n, m);
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


int multColumn(int**M, int n, int column) {
    int result = 1;
    for(int i = 0; i < n; i++) {
        result *= M[i][column];
    }
    return result;
}

void Solution(int** M, int n, int m) {
    int result = multColumn(M, n, 0);
    int column_result;
    int index = 0;
    for(int j = 1; j < m; j++ ) {
        column_result = multColumn(M, n, j);
        if (column_result < result) {
            result = column_result;
            index = j;
        }
    } 

    cout << "RESULTS: " << endl;
    cout << result << endl;
    cout << index << endl;

    // cout << "result: " << result << endl;
    // cout << "column: " << column << endl;
}

