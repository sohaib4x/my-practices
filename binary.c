#include <stdio.h>
#include <stdlib.h>

int calc_binary(int a_num);

int main() {
    int decimal_num;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    int binary_equivalent = calc_binary(decimal_num);

    printf("Binary equivalent: %d\n", binary_equivalent);
    return 0;
}

int calc_binary(int a_num) {
    int binary = 0, i = 1, remainder;
    for (i = 1; a_num > 0; i = i * 10) {
        remainder = a_num % 2;
        a_num = a_num / 2;
        binary = binary + remainder * i;
    }
    return binary;
}
