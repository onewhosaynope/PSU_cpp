/**
 * Пазов В.С.
 * Array99
 * Дан целочисленный массив размера N. 
 * Удалить из массива все элементы,  встречающиеся  более  двух  раз,  
 * и вывести размер полученного массива и его содержимое.
 */


#include <iostream>

using namespace std;

const int SIZE = 9;

void print(const int * arr, const size_t size = SIZE){
    for (size_t i = 0; i < size; i++)
        cout << "[" << arr[i] << "]";
     cout << endl;
}

bool isNextExist(const int * arr, const size_t current_posiziton, const int find_number){
    for (size_t i = current_posiziton + 1; i < SIZE; i++)
        if (arr[i] == find_number)
            return true;

    return false;
}

void moveInEnd(int * arr, const size_t position){
    int tmp = arr[position];

    for (size_t i = position; i < SIZE; i++)
        arr[i] = arr[i + 1];

    arr[SIZE - 1] = tmp;
}

const size_t unique(int * arr){
    size_t len = SIZE;

    for (size_t i = 0; i < len; i++){
        if (isNextExist(arr, i, arr[i])){
            moveInEnd(arr, i);
            len--;
            i = 0;
            continue;
        }
    }

    return len;
}

int main(){
    int arr[SIZE] = { 9, 2, 2, 3, 4, 4, 2, 2, 8 };
    size_t len;

    cout << "source array:" << endl;
    print(arr);

    len = unique(arr);

    cout << endl << "array after unique processing: " << endl;
    print(arr);

    cout << endl << "Unique elements " << len << ", here they are ";
    print(arr, len);


    return 0;
}