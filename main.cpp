#include <iostream>
#include <string>

#include "arrayprint.h"
#include "arrayinversion.h"
#include "arrayprogression.h"
#include "arraycheckbalance.h"
#include "arrayshift.h"

using namespace std;
using namespace exampleNS;

int main()
{
//06. Вызов функций с использованием указателей
    void(*fpointer_00)(int* array, int n);
    fpointer_00 = ArrayPrint;

    void(*fpointer_01)(int* array, int length);
    fpointer_01 = ArrayInversion;

    void(*fpointer_02)(int* array, int length);
    fpointer_02 = ArrayProgression;

    bool(*fpointer_03)(int* array, int length);
    fpointer_03 = ArrayCheckBalance;

    void(*fpointer_04)(int* array, int* boofer, int n, int length);
    fpointer_04 = ArrayShift;

//01. Инвертировать значения в массиве, + //05. работа над массивом любой длинны
    cout << "Задание 01. Инвертирование 0 и 1 в массиве" << endl;\

    const int length_01 = 12;
    int inversion_array[length_01] = {0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0};

    fpointer_00(inversion_array, length_01);
    cout << endl;

    fpointer_01(inversion_array, length_01);
    fpointer_00(inversion_array, length_01);
    cout << endl << endl;

//02. Произвести заполнение массива с шагом в 3
    cout << "Задание 02. Заполнение массива с шагом в 3" << endl;

    const int length_02 = 8;
    int progression_array[length_02] = {0};

    fpointer_02(progression_array, length_02);
    fpointer_00(progression_array, length_02);
    cout << endl << endl;

//03. Проверка массива на баланс
    cout << "Задание 03. Проверка массива на баланс" << endl;

    const int length_03 = 5;
    int balance_array[5] = {10, 1, 2, 3, 4};

    cout << (fpointer_03(balance_array, length_03) == 0 ? "false" : "true") << endl << endl;

//04. Циклический сдвиг значений массива
    cout << "Задание 04. Циклический сдвиг значений массива" << endl;

    const int length_04 = 5;
    int shift_array[length_04] = {1, 2, 3, 4, 5};
    int shift_boofer[length_04] = {0};
    int shift_value;

    cout << "Пожалуйста, введите величину сдвига" << endl;
    cin >> shift_value;

    fpointer_04(shift_array, shift_boofer, shift_value, length_04);
    fpointer_00(shift_array, length_04);

    cout << endl << endl;

    return 0;
}
