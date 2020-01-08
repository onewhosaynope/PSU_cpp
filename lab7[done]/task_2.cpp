/**
 * Пазов В.С.
 * String36 (работа с строкойё)
 * Даны  строки S, S и S1.
 * Заменить в строке S вхождения
 * строки S1 на строку S2.
 */

#include <iostream>
#include <string>

using namespace std; 
  
string replace(string S, string S1, string S2) { 
    string result = "";
    string word = ""; 

    for (int i = 0; i < S.length(); i++) { 

        if (S[i] == ' ' || S[i] == ',' || S[i] == '.' || i == S.length()) { 
            
            if (word == S1) {
                word = S2;
            }
            result = result + word + " ";
            word = ""; 
        
        } else {
            word = word + S[i];
        } 
   }  
   return result;
}


int main() { 
    string S; 
    string S1;
    string S2;

    cout << "Enter S: " << endl; 
    getline(cin, S);
    cout << "Enter S1: " << endl; 
    cin >> S1;
    cout << "Enter S2:" << endl; 
    cin >> S2;
    
    cout << replace(S + " ", S1, S2) << endl; 
    return 0; 
} 