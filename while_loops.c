#include <stdio.h>
#include <stdlib.h>

int main () {
   int index = 1;
   while(index <= 5) {
        printf("%d\n", index);
        index = index + 1; // we can also use index++;
   }


   int index = 6;
   do {
        printf("%d\n", index);
        index = index + 1; 
   } while(index <= 5);

    return 0; 
}