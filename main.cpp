#include <iostream>
#include <string>
using namespace std;

int Inversion(int* array) {
    for (int i = 0; i < 10; i++) {
        if (*(array + i) == 0) {
            *(array + i) = 1;
        }
        else {
            *(array + i) = 0;
        }
    cout << *(array + i) << (i < 9 ? "," : ".") << " ";
    }
    return 0;
}


int main()
{
    int ExampleArray_0[10] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};

    Inversion(ExampleArray_0);
    cout << endl;

    return 0;
}
