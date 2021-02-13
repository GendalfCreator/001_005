#include <iostream>
#include <string>
using namespace std;

int Inversion(int* array) {
    for(int i = 0; i < 10; i++) {
        if (*(array + i) == 0) {
            *(array + i) = 1;
        }
        else {
            *(array + i) = 0;
        }
    }
    return 0;
}

int Progression(int* array) {
    *array = 1;
    for(int i = 1; i < 8; i++) {
        *(array + i) = *(array + i - 1) + 3;
    }
    return 0;
}

void PrintArray(int* array, int n) {
    for(int i = 0; i < n; i++) {
        cout << *(array + i) << " ";
    }
}

int main()
{
    int example_array_0[10] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};

    PrintArray(example_array_0, 10);
    cout << endl;

    Inversion(example_array_0);
    PrintArray(example_array_0, 10);
    cout << endl;

    int example_array_1[8] = {};

    Progression(example_array_1);
    PrintArray(example_array_1, 8);
    cout << endl;

    return 0;
}
