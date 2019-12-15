#include<iostream>

using namespace std;

int AddNum(int num1, int num2);
int SubNum(int num1, int num2);
int MultNum(int num1, int num2);
int DiviNum(int num1, int num2);
int ModNum(int num1, int num2);

int main() {

 int num1, num2, selection;

  cout << "Please enter an integer:  ";
  cin >> num1;

  cout << "Please enter another integer:  ";
  cin >> num2;

  cout << "Select action:\n";
  cout << "1. Addition\n";
  cout << "2. Subtraction\n";
  cout << "3. Multiplication\n";
  cout << "4. Division\n";
  cout << "5. Modular Division\n";
  cout << "Selection: ";
  cin >> selection;

  switch(selection) {

    case 1:
        cout << AddNum(num1,num2);
	    break;

    case 2:
        cout << SubNum(num1,num2);
        break;
    
    case 3:
        cout << MultNum(num1,num2);
        break;
    
    case 4:
        cout << DiviNum(num1,num2);
        break;
    
    case 5:
        cout << ModNum(num1,num2);
	    break;

    default:
	    cout << "Invalid selection\n";
    }

  return 0;

}

int AddNum(int num1, int num2) {
    return num1 + num2;
}

int SubNum(int num1, int num2) {
    return num1 - num2;
}

int MultNum(int num1, int num2) {
    return num1 * num2;
}

int DiviNum(int num1, int num2) {
    return num1 / num2;
}

int ModNum(int num1, int num2) {
    return num1 % num2;
}