#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("\nEnter binary number: ");
    scanf("%d", &n);
    int i = 31, bit, decimal = 0;
    while(n != 0) {
        bit = n&1;
        if(bit) decimal += pow(2, i)*bit;
        n >>= 1;
        i--;
    }

    // while(n != 0) {
    //     digit = n%10;
    //     if(digit) decimal += pow(2, i)*digit;
    //     n /= 10; i++;
    // }
    printf("\nDecimal: %d", decimal);
    return 0;
}