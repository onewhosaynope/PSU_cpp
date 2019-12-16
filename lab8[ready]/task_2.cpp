/**
 * Пазов В.С.
 * Text33. 
 * Дан символ C — строчная (маленькая) русская буква и текстовый файл.
 * Создать строковый файл и записать в него все слова из исходного файла,
 * содержащие хотя бы одну букву C (прописную или строчную).
 * Словом считать набор символов, не содержащий пробелов, знаков препинания
 * и ограниченный пробелами, знаками препинания или началом/концом строки. 
 * Если исходный файл не содержит подходящих слов,то оставить результирующий файл пустым.
**/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("input2.txt");
    ofstream outputFile("output2.txt");

	if(inputFile.is_open()) {
		cout << "File opened.\n" ;

		cout << "Write the letter you're searching for\n" ;
		char letter ;
		cin >> letter ;
        letter = toupper(letter);
		string word ;
		
        while(inputFile >> word) {
        	for(int i = 0; i < word.length(); i++) {
                if (toupper(word[i]) == letter) {
                    outputFile << word << "\n"; 
                }
            }
		}
    }
    else {
		cout << "Error! File not found!\n" ;
		return 0 ;
	}
}