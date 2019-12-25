#include <iostream>

using namespace std;

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
    int count;
    for (int i = 0; i < n; i++) {
        
        count = 1;
        
        for (int j = i + 1; j < n; j++) {
            if (M[j] == M[i]) {
                count++;
            }
        }

        if (count > 2) {
            
            int one = M[i];
            
            for (int j = i; j < n; j++) {
                if (M[j] == one) {
                    // delete
                    
                    for (int k = j + 1; k < n; k++) {
                        M[k - 1] = M[k];
                        }
                    n--;
                    j--;
                }
            }
            i--;
        }

    }

    return n;
}

int main() {
    int n;

    cout << endl << "Array size [N]:" << endl;
    cin >> n;

    int* A = new int[n];

    cout << endl << "Enter array values:" << endl;
    array_fill(A, n);

    cout << endl << "Values of array:" << endl;
    array_print(A, n);

    n = solution(A, n);

    array_print(A, n);

    delete[] A;
    return 0;
}