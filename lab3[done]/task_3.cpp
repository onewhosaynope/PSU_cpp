/**
 * Пазов В.С.
 * Дано целое число N и набор из N целых чисел. 
 * Если в наборе имеются положительные числа, то вывести TRUE; 
 * в противном случае вывести FALSE. 
 */

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int N;
    int x;
	string result;
        
    cout << "Enter N:\n";
	cin  >> N;
	cout << endl;

	for(int i = 0; i < N; i++) {
		x = -5 + rand() % 10;
		cout << x << " : " << boolalpha << (x > 0) << endl;
		if(x > 0)
			break;
	}
	
	cout << endl;
	cout << "There is a positive number: " << result;
	cout << endl;

	return 0;
}
