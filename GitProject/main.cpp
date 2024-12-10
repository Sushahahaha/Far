#include "sdt.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");  // Устанавливаем локаль для работы с русским языком.
    int num1, num2;

    // Приглашение для ввода чисел
    cout << "Введите два целых числа: ";

    // Ввод чисел
    cin >> num1 >> num2;

    // Вывод введённых чисел
    cout << "Вы ввели: " << num1 << " и " << num2 << endl;

    return 0;
}