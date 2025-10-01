#include <stdio.h>
#include <stdlib.h>

int main () 
{

    // Scan f only grabs characters until a space is encountered. so a celeberty like "Tom Hanks" will not work
    char color[30];
    char pluralNoun[30];
    char celebrityF[30];
    char celebrityL[30];
    char celebrity[60]; // to hold first and last name (but C is specific so you cant just enter either first or last name, it must be both)
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL); // to grab first and last name
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s%s\n", celebrity);
    printf("And so do you\n");
   

    return 0; 
}