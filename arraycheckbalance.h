#ifndef CHECKBALANCE_H
#define CHECKBALANCE_H

#endif // CHECKBALANCE_H

namespace exampleNS {
    bool ArrayCheckBalance(int* array, int length) {
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
}
