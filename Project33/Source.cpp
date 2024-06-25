#include <iostream>
#include<Windows.h>
using namespace std;

void printArr(int arr[], int dimention);
void calculatingMassiv(int arr[], int dimention);



void printArr(int arr[], int dimention)
{
    std::cout << "Начните массировать: ";
    for (int i = 0; i < dimention; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << endl;
}

void calculatingMassiv(int arr[], int dimention)
{
    int plus = 0;
    int minus = 0;
    int zero = 0;

    for (int i = 0; i < dimention; i++)
    {
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    std::cout << "Количество положительных элементов = " << plus <<
        "Количество отрицательных элементов = " << minus  <<
        "Количество нулевых элементов = " << zero ;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int massiv[] = { 1, -2, 3, -4, 0, 0, -7, 8, -9 };
    int arDimention = sizeof(massiv) / sizeof(int);
    std::cout << "Программа выполняет поиск по номеру"  <<
        "положительные, отрицательные и нулевые элементы" ;
     
    printArr(massiv, arDimention);
    
    calculatingMassiv(massiv, arDimention);
    return 0;
}