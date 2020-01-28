/**
 * Пазов В.С.
 * File34. 
 * Даны числа D1 и D2 и указатель P0 на один из элементов непустого двусвязного списка.
 * Добавить в начало списка новый элемент со значением D1, 
 * а в конец — новый элемент со значением D2.
 * Вывести адреса первого и последнего элементов полученного списка.
**/

#include<iostream>

using namespace std;

struct List {
  int x;
  struct List * Next;
  struct List * Prev;
};

List * Head = 0;
List * Last = 0;

void Add(int x) {

  List * r = new List;

  r -> x = x;
  r -> Next = 0;
  r -> Prev = 0;

  if (Head != 0) {

    r -> Prev = Last;
    Last -> Next = r;
    Last = r;
  
  } else {
  
    Head = Last = r;
  
  }

}

void Output() {

  List * s = Head;
  List * e = Last;

  cout << s << endl << e << endl;

}

void Add_start(int d1) {

  List * n = new List;

  n -> x = d1;
  n -> Next = Head;
  n -> Prev = 0;
  Head -> Prev = n;
  Head = n;

}

void Add_end(int d2) {

  List * z = new List;

  z -> x = d2;
  z -> Prev = Last;
  z -> Next = 0;
  Last -> Next = z;
  Last = z;

}

int main() {

  int D1, D2;

  for (int i = 0; i < 10; i++) {

    Add(rand() % 9);

  }

  cout << "Original list: " << endl;

  Output();

  cout << "Enter nums to add them at start and at end of list" << endl;

  cin >> D1 >> D2;

  Add_start(D1);

  Add_end(D2);

  cout << "Result list: " << endl;

  Output();

  return 0;

}