#include <stdio.h>
int main(void) {
    // loop over all possible digits
    for (int i = 0; i < 10; i++) {
        // print the current digit
        putchar('0' + i);
        
        // if this is not the last digit, print the separator
        if (i < 9) {
            putchar(',');
            putchar(' ');
            
            // loop over the remaining digits
            for (int j = i + 1; j < 10; j++) {
                // print the current digit
                putchar('0' + j);
                
                // if this is not the last digit, print the separator
                if (j < 9) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    
    return 0;
}

