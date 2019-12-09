#include <iostream>
using namespace std;

int** matrix_init(int n, int m);
void matrix_clean(int** M, int n);
void matrix_fill(int** M, int n, int m);
void matrix_print(int** M, int n, int m);
void solution(int** M, int n, int m);

int main() {
    int n, m;
    cout << "Number of lines [n]: ";
    cin >> n;
    cout << "Number of colums: [m]";
    cin >> m;
    int** A = matrix_init(n, m);
    matrix_fill(A, n, m);
    solution(A, n, m);
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


void matrix_print(int** M, int n, int m)    {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}


void solution(int** M, int n, int m) {
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < m; j++) {
             sum += M[i][j];
        }
        cout << i << " sum = " << sum << endl;
    }
}