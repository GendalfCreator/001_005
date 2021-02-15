#ifndef PROGRESSION_H
#define PROGRESSION_H

#endif // PROGRESSION_H
namespace exampleNS {
    void ArrayProgression(int* array, int length) {
        *array = 1;
        for(int i = 1; i < length; i++) {
            *(array + i) = *(array + i - 1) + 3;
        }
    }
}
