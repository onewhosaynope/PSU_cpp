/**
 * Пазов В.С.
 * Описать функцию Arctg1(x,ε) вещественного типа 
 * (параметры x, ε—вещественные, |x| < 1, ε> 0), 
 * находящую приближенное значение функции arctg(x):
 * arctg(x) =x − x^3 / 3 + x^5 / 5 − . . .+ (−1)^n · x^(2·n+1) / (2·n + 1) +. . .
 * В сумме учитывать все слагаемые, модуль которых больше ε. 
 * С помощью Arctg1 найти приближенное значение arctg(x) для данного x при шести данных ε.
 */

# include <iostream>
# include <cmath>

using namespace std;

float arctg1(float x, float e) {
   
  if (e <= 0) {
    cout << "\ne must be greater than 0\n";
  }

  float y = x;
  float f = x;
  int i = 3;
  float result;

  while (abs(y) > e) {
    y *= (-1) * x*x / i*(i-2);
    i += 2;
    f += y;
    // cout << i << " : " << y << " : " << f;
  }

  return f;
  
}


int main () {
  double x, e;

  cout << "Enter x (|x|<1): ";
  cin >> x;

  if (abs(x) >= 1) {
    cout << "|x| must be less than 1";
    return 0;
  }

  for (int i = 1; i < 7; ++i) {
    cout << "Value e (e>0): ";
    cin >> e;
  	cout << "Result of arctg(x): " << arctg1(x, e) << endl << endl;
    cout << "Real arct(x)" << atan(x) << endl;
  }

  return 0;
}

