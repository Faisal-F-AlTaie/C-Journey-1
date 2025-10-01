#include <stdio.h>
#include <stdlib.h>

int main () 
{
   printf("Hello World\n"); 
   printf("%d\n", 500);
   printf("My favourite number is %d\n", 500);
   printf("My favourite %s is %d\n", "number", 500);
   printf("My favourite number is %f\n", 3.14159);

   int favnum = 90;
    printf("My favourite number is %d\n", favnum);

    char myChar = "i";
    printf("My favourite character is %c\n", myChar);

    return 0; 
}