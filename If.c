#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3) {
    int result;
    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if(num2 >= 1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
}

int main () 
{
    printf("%d\n", max(4, 10, 7));

    if(3 > 2 || 2 > 5) {
        printf("True\n");
    } else {
        printf("False\n");
    }
   

    return 0; 
}






