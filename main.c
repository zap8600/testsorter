#include <stdio.h>
#include <stdint.h>

void sortints(int* ints, size_t amt) {
    // TODO: Sort the ints
    int tempentry = 0;
    size_t smallindex = amt - 1;
    size_t stopper = 0;
    while(stopper < amt) {
        for(size_t i = 0, j = amt - 1; (i < amt) && (j >= stopper); i++, j--) {
            if(ints[j] < ints[smallindex]) {
                smallindex = j;
            }
        }
        
        if((stopper != (amt - 1))) {
            // Swaps ints
            tempentry = ints[smallindex];
            ints[smallindex] = ints[stopper];
            ints[stopper] = tempentry;
        }
        stopper++;
        smallindex = amt - 1;
    }
}

int main() {
    int ints[11] = {0, 3, 7, 4, 5, 2, 1, 9, 6, 9, 10};
    sortints(&(ints[0]), 11);
    fputc('[', stdout);
    for(int i = 0; i < 11; i++) {
        printf(((i == 10)?"%d]\n":"%d, "), ints[i]);
    }
    return 0;
}