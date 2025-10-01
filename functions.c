#include <stdio.h>
#include <stdlib.h>

int main () 
{
    printf("Top");
   sayHi_a();
   printf("Bottom");
   // Giving an argument
   sayHi_b("Mike");

    return 0; 
}


void sayHi_a(){
    printf("Hello User\n");
}

//Give the function a parameter
void sayHi_b(char name){
    printf("Hello %s\n", name);
}