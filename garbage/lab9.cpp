/**
 * Пазов В.С.
 * Dynamic44. 
 * Дан указатель P0 на один из элементов непустого двусвязного списка.
 * Переместить данный элемент в конец списка и вывести указатели 
 * на первый и последний элементы преобразованного списка. 
 * Операции выделения и освобождения памяти не использовать, поля Data не изменять.
 * 
 * Использовать файлы. Заполнять их рандомом или как-то ещё.
**/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

struct nodes {
    int data;
    nodes* prev;
    nodes* next;
};

nodes* generate(int n);     // creates n-sized list and returns it's head.
void destruct(nodes* ptr);  // destructs all elements starting from *ptr.
void show(nodes* ptr);      // displays all elements starting from *ptr.

int main(void) {
    nodes* p1 = generate(5);
    show(p1);


    // solution
    nodes* iterator = p1;
    if(iterator->data %2 == 0){
        iterator->prev = new nodes;
        iterator->prev->data = iterator->data;
        iterator->prev->prev = NULL;
        iterator->prev->next = iterator;

        p1 = iterator->prev;
    }

    while(iterator->next != NULL){
        if(iterator->next->data %2 == 0){
            iterator->next->prev = new nodes;
            iterator->next->prev->data = iterator->next->data;
            iterator->next->prev->next = iterator->next;
            iterator->next->prev->prev = iterator;

            iterator->next = iterator->next->prev;
            iterator = iterator->next;
        }
        iterator = iterator->next;
    }
    // end solution


    show(p1);
    destruct(p1);
    p1 = NULL;
    return 0;
}

nodes* generate(int n){
    if (n < 1) {
        return NULL;
    }

    srand(time(NULL));

    nodes* head = new nodes;

    head->next = NULL;
    head->prev = NULL;
    head->data = rand()%10+1;
    
    for(int i = 1; i < n; i++) {
        
        head->prev = new nodes;
        head->prev->next = head;
        head->prev->prev = NULL;
        head->prev->data = rand() % 10 + 1;
        head = head->prev;
    }

    return head;
}

void show(nodes* ptr) {
    if(ptr == NULL) return;
    
    while(ptr != NULL) {
        cout << ptr->data << "\t";
        ptr = ptr->next;
    }

    cout << endl;
}

void destruct(nodes* ptr) {
    if(ptr == NULL) return;
    do {
        nodes* tmp = ptr;
        ptr = ptr->next;
        delete tmp;
    } while(ptr != NULL);
}