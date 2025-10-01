#include <stdio.h>
#include <stdlib.h>

int main () {

    // Will create a file on you C hardrive
    FILE * fpointer = fopen("C:/emplyees.txt", "w" );
    // add text into this file 
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

    fclose(fpointer);


   

    return 0; 
}