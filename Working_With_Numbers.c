#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
    printf("%d\n", 5 + 4);
    printf("%f\n", 5.0 + 4.5);
    printf("%f\n", 5 + 4.5);
    printf("%f\n", 5 / 4.5);

    printf("%f\n", pow(2, 3)); // 2^3 = 8

    printf("%f\n", sqrt(36)); // sqrt(36) = 6

    printf("%f\n", ceil(36.356)); // Round Up = 37
    printf("%f\n", floor(36.356)); // Round Down = 36

    return 0;  
}