/*********************************************
* Автор: Арестова Е.Е.                       *
* Дата: 15.10.2024                           *
* Название: Использование процедур и функций *
* Вариант:  № 2                               *
**********************************************/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

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

    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (X[i] < c || X[i] > d) {
            sum += X[i];
        }
    }
    cout << "Сумма элементов массива X = " << sum << endl;

    int sum2 = 0;
    for (int i = 0; i < n; ++i) {
        if (Z[i] < c || Z[i] > d) {
            sum += Z[i];
        }
    }
    cout << "Сумма элементов массива Z = " << sum;
}
    