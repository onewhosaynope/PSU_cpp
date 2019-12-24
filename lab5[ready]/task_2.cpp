/**
 * Пазов В.С.
 * Array99
 * Дан целочисленный массив размера N. 
 * Удалить из массива все элементы,  встречающиеся  более  двух  раз,  
 * и вывести размер полученного массива и его содержимое.
 */


#include <iostream>
#include <unordered_map>

using namespace std;


void array_fill(int* M, int n);
void array_print(int* M, int n);
void solution(int* M, int n, int k);


int main() {
    int n, k;
    
    cout << endl << "Array size [N]:" << endl;
    cin >> n;

    int* A = new int[n];
    
    cout << endl << "Enter array values:" << endl;
    array_fill(A, n);

    cout << endl << "Values of array:" << endl;
    array_print(A, n); 

    cout << endl << "Enter frequency:" << endl;
    cin >> k;
    
    solution(A, n, k);
    
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


void solution(int M[], int n, int k) { 
    
    unordered_map<int, int> mp; 
  
    for (int i = 0; i < n; ++i) {
        mp[M[i]]++; 
    } 

    cout << endl << "Processed array:" << endl;
    int count = 0;
    for (int i = 0; i < n; ++i) { 
        if (mp[M[i]] <= k) { 
            cout << M[i] << " ";
            count = count + 1; 
        } 
    }
    cout << endl << endl << "Size of processed array: " << endl << count << endl;
} 