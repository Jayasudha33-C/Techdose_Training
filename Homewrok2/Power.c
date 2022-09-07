#include <stdio.h>
int main() {
    int base, power;
    long double result = 1.0;
    scanf("%d %d",&base,&power);
    while (power != 0) {
        result *= base;
        --power;
    }
    printf("%.0Lf", result);
    return 0;
}