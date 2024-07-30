#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // create a regular old variables:
    int a=42;
    double pi = 3.1415;

    // create a pointer variable that can point to an integer:
    //pointerTOA is a pointer to an intger, NOT an integer itself

    int *pointerTOA;
    // by default, there is a no value associated with unitiialized variables
    // you can make a pointer point to "nothing
    pointerTOA = NULL;

    if (pointerTOA == NULL){
        printf("Error: cannot acess that memory\n");
    }

    // we want to make pointerTOA actually point to the variable a:
    //ampersand in front of the regular old variable gets to the memory adress
    pointerTOA = &a;
    printf("A is regular old variable, it holds the value %d\n", a);
    printf("pointerTOA is a pointer and has the value %p\n", pointerTOA);
    printf("The memory location %p holds the value ...%d\n", pointerTOA, a);

    return 0;
}
