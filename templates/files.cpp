#include <fstream>

using namespace std;
 
int main() {
	
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	
	int temp; // Определяем переменную
	fin >> temp; // Получаем данные из файла input.txt
	fout << temp; // Записываем данные в файл output.txt
	
 	fin.close();
 	fout.close();
 	
	return 0;
}