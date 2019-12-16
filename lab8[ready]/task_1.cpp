/**
 * Пазов В.С.
 * File34. 
 * Дан файл целых чисел. 
 * Удалить из него все отрицательные числа.
**/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
  int c, x;
  
  ifstream inputFile("input1.txt");
  ofstream outputFile("output1.txt");

  if (inputFile.is_open()) {
    while (inputFile.good()) {
      inputFile >> c;
      if (c > 0) {
          outputFile << c << " ";
      } 
    }
     inputFile.close();
     outputFile.close();
  } else {
      cout << "Unable to open file";
  }
  
  return 0;
}