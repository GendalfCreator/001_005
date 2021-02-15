#include <iostream>
#include <string>
using namespace std;

int ArrayInversion(int* array, int length) {
    for(int i = 0; i < length; i++) {
        if (*(array + i) == 0) {
            *(array + i) = 1;
        }
        else {
            *(array + i) = 0;
        }
    }
    return 0;
}

int Progression(int* array, int length) {
    *array = 1;
    for(int i = 1; i < length; i++) {
        *(array + i) = *(array + i - 1) + 3;
    }
    return 0;
}

void ArrayPrint(int* array, int n) {
    for(int i = 0; i < n; i++) {
        cout << *(array + i) << " ";
    }
}

bool CheckBalance(int* array, int length) {
    int i, j, k, f, sum_l = 0, sum_r = 0;

    for(k = 1; k <= length - 1; k++ ) {
        sum_l = 0;
        sum_r = 0;
        for(i = 0; i <= k - 1 ; i++) {
            sum_l = sum_l + *(array + i);
        }
        for(j = k; j <= length -1; j++) {
            sum_r = sum_r + *(array + j);
        }
        if(sum_l == sum_r) {
            f = 1;
            break;
        }
        else {
            f = 0;
        }
    }
//    cout << sum_l << " " << sum_r << endl; //Для возможности наглядной демонстрации баланса

    return ( f == 1 ? true : false);
}

void ArrayShift(int* array, int* boofer, int n, int length) {
    int o = 0;
    for (int i = 0; i < length; i++) {
        if (i + n > length - 1) {
            o = i + n - length;
            if (o >= length)
                while (o >= length) {
                    o = o - length;
                }
        }
        else if (i + n < 0) {
            o = i + n + length;
            if (o < 0)
                while (o < 0) {
                    o = o + length;
                }
        }
        else {
            o = i + n;
        }
        *(boofer + o) = *(array + i);
    }
    for (int i = 0; i < length; i++) {
        *(array + i) = *(boofer + i);
    }
}

int main()
{

//01. Инвертировать значения в массиве + //05. работа над массивом любой длинны
    const int length_01 = 12;
    int inversion_array[length_01] = {0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0};

    ArrayPrint(inversion_array, length_01);
    cout << endl;

    ArrayInversion(inversion_array, length_01);
    ArrayPrint(inversion_array, length_01);
    cout << endl;

//02. Произвести заполнение массива с шагом в 3
    const int length_02 = 8;
    int progression_array[length_02] = {0};

    Progression(progression_array, length_02);
    ArrayPrint(progression_array, length_02);
    cout << endl;

//03. Проверка массива на баланс
    const int length_03 = 5;
    int balance_array[5] = {10, 1, 2, 3, 4};

    cout << (CheckBalance(balance_array, length_03) == 0 ? "false" : "true") << endl;

//04. Циклический сдвиг значений массива
    const int length_04 = 5;
    int shift_array[length_04] = {1, 2, 3, 4, 5};
    int shift_boofer[length_04] = {0};
    int shift_value = -3;

    ArrayShift(shift_array, shift_boofer, shift_value, length_04);
    ArrayPrint(shift_array, length_04);

    cout << endl;
//05.
    return 0;
}
