// File25◦. 
// Дан файл вещественных чисел. 
// Заменить в нем все элементы на их квадраты.
// filename: input1.txt output.txt


#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int solution();

int main(){
  solution();  
  return 0;
}

int solution() {
  vector<int>numbers;
  int num;
  
  ifstream inputFile("input1.txt");
  
  if (inputFile.is_open()) {
    
    while (inputFile.good()) {
        inputFile >> num;
        numbers.push_back(pow(num, 2));
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
