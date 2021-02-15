#ifndef ARRAYPRINT_H
#define ARRAYPRINT_H

#endif // ARRAYPRINT_H


namespace exampleNS {
    void ArrayPrint(int* array, int n) {
        for(int i = 0; i < n; i++) {
            std::cout << *(array + i) << " ";
        }
    }
}

