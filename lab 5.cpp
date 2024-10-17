/**************************
* Автор: Арестова Е.Е.    *
* Дата: 15.10.2024        *
* Название: 
* Вариант:  №2            *
***************************/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void sumElement(int lenght, int* mass, int c, int d) {
    int sum = 0;
    for (size_t i = 0; i < lenght; ++i) {
        if (mass[i] < c || mass[i] > d) {
            sum += mass[i];
        }
    }
    cout << "Сумма элементов массива: " << sum << endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    srand(unsigned(NULL));

    int const k = 8;
    int const n = 8;
    int c, d;

    cout << "Введите c: ";
    cin >> c;
    cout << "Введите d: ";
    cin >> d;

    int X[k];
    for (int i = 0; i < k; ++i) {
        X[i] = rand() % 40 - 20;
    }

    int Z[n];
    for (int i = 0; i < n; ++i) {
        Z[i] = rand() % 40 - 20;
    }

    cout << "Вывод матрицы: " << endl;
    for (int i = 0; i < k; ++i) {
        cout << X[i] << " ";
    }
    cout << endl;

    cout << "Вывод матрицы: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << Z[i] << " ";
    }

    cout << endl;

    sumElement(k, X, c, d);
    sumElement(n, Z, c, d);
}