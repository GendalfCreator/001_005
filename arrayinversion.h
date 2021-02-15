#ifndef ARRAYINVERSION_H
#define ARRAYINVERSION_H

#endif // ARRAYINVERSION_H
namespace exampleNS {
    void ArrayInversion(int* array, int length) {
        for(int i = 0; i < length; i++) {
            if (*(array + i) == 0) {
                *(array + i) = 1;
            }
            else {
                *(array + i) = 0;
            }
        }
    }
}
