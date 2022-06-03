#include <iostream>
#include <windows.h>
#include <math.h>
#include <clocale>

using std::cin;
using std::cout;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 25;
    int M, e = 0;
    double A[n];

    cout << "Введите количество элементов в массиве A" << "\n";
    cin >> M;
    srand(time(0)); // Функция для того, чтобы каждый раз генерировались случайные числа
    for (int i = 0; i < M; i++) { // Заполнение массива случайными числами в диапазоне от 0 до 10
        A[i] = rand() % 10/(0.01+1);
    }
    cout << "Массив А: ";
    for (int i = 0; i < M; i++) { // Вывод массива А и подсчёт элементов в нём меньше 6 и больше 2
        cout << A[i] << " ";
        if (A[i] <= 6 && A[i] >= 2) {
            e += 1;
        }
    }
    cout << "\n";
    int c = 0;
    double* B = new double[e]; // Объявление динамического массива B, размерностью e
    for (int i = 0; i < M; i++) {  // Внесение элементов [2, 6] из массива A в массив B
        if (A[i] <= 6 && A[i] >= 2) {
            B[c] = A[i];
            c += 1;
        }
    }
    cout << "Массив B: "; // Вывод массива B
    for (int i = 0; i < e; i++) {
        cout << B[i] << " ";
    }
}