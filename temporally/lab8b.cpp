// Text24. 
// Дан текстовый файл. 
// Найти количество абзацев в тексте, 
// если абзацы отделяются друг от друга 
// одной или несколькими пустыми строками.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    int count = 0;
    ifstream inputFile("input2.txt");
    if (inputFile.is_open()) {
        
        string line;
        while (getline(inputFile, line)) {
            if (line == "") {
                ++count;
            }
        }
        
        inputFile.close();
        cout << count;
    } else {
        cout << "Unable to open file";
    }
    return 0;
}