#ifndef ARRAYSHIFT_H
#define ARRAYSHIFT_H

#endif // ARRAYSHIFT_H
namespace exampleNS {
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
}
