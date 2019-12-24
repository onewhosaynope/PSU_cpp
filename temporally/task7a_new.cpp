// String27. 
// Даны целые положительные числа N1 и N2 и строки S1 и S2. 
// Получить из этих строк новую строку, 
// содержащую первые N1 символов строки S1 и 
// последние N2 символов строки S2 (в указанном порядке).


#include <iostream>
#include <cstring>

using namespace std;


// char* appendCharToCharArray(char* array, char a) {
//     size_t len = strlen(array);

//     char* ret = new char[len+2];

//     strcpy(ret, array);    
//     ret[len] = a;
//     ret[len+1] = '\0';

//     return ret;
// }

void reverseChar(char* str) {
    for(int i=0;i<strlen(str)/2;i++) {
    
    char temp=str[i];
    str[i]=str[strlen(str)-i-1];
    str[strlen(str)-i-1]=temp;
    
    }
}


int main() {

    int N1;
    int N2;

    char S1[255]; 
    char S2[255];
    char result1[255];
    char result2[255];

    cout << "Enter S1: \n";
    cin >> S1;
    cout << "Enter S2: \n";
    cin >> S2;
    cout << "Enter N1: \n";
    cin >> N1;
    cout << "Enter N2: \n";
    cin >> N2;
    
    reverseChar(S2);
    
    strncpy (result1, S1, N1);
    strncpy (result2, S2, N2);
    reverseChar(result2);

    cout << "Result: " << endl << result1 << result2 << endl;

}