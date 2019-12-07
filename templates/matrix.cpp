#include <iostream>
//#include <clocale>
using namespace std;
//----- объявление прототипов используемых функций-----------------
int** Create(int n,int m);           // создание матрицы n строк m столбцов
void Free(int** M,int n);             // освобождение матрицы
void Input(int** M,int n,int m);   // ввод матрицы
void Print(int** M,int n,int m);     // вывод матрицы
//--------------------------------------------------------------------------
void Work(int** M,int n,int m);    // обработка матрицы
//   Сюда добавить протопипы тех функций которые дополнительно напишете
//--------------------------------------------------------------------------
 
//----------  main() -  точка входа в программу консольного приложения 
int main()
{
    //setlocale(LC_ALL,"Rus");
    int n,m;
    cout<<"Количество строк матрицы:?";
    cin>>n;
    cout<<"Количество столбцов матрицы:?";
    cin>>m;
    int** A=Create(n,m);
    Input(A,n,m);
    Work(A,n,m);
    Free(A,n);
    //system("pause");
    return 0;
}
 
//----   описание функций -----------------------------------------
int** Create(int n,int m)
{
    int** M=new int*[n];
    for(int i=0;i<n;i++)
    {
        M[i]=new int[m];
    }
    return M;
}
//----------------------------
void Free(int** M,int n)
{
    for(int i=0;i<n;i++)
        delete[] M[i];
    delete[] M;
}
//----------------------------
void Input(int** M,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"M["<<i<<"]["<<j<<"]=?";
            cin >> M[i][j];
        }
    
    }
}
//----------------------------
void Print(int** M,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}
// пример обработки - подсчет сумм в каждой строке
void Work(int** M,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
             sum+=M[i][j];
        }
        cout<<i<<" sum = " << sum<< endl;
    }
}
// сюда вставить все дополнительные функции которые напишете