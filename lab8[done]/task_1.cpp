/**
 * Пазов В.С.
 * File34. 
 * Дан файл целых чисел. 
 * Удалить из него все отрицательные числа.
**/

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
  vector<int>numbers;
  int num;
  
  ifstream inputFile("input1.txt");
  
  if (inputFile.is_open()) {
    
    while (inputFile.good()) {
        inputFile >> num;
        if (num > 0) {
          numbers.push_back(num);
        }
    }
    inputFile.close();

    ofstream outputFile("input1.txt");
    for (int i = 0; i < numbers.size(); i++) {
        outputFile << numbers.at(i) << " ";
    }
    outputFile.close();
    
  } else {
      cout << "Unable to open file";
  }
  
  return 0;
}