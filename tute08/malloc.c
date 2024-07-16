// Malloc Revision
// Written by Catherine Cheng z5310517

#include <stdio.h>
#include <stdlib.h>
struct my_struct {
    int number;
    char letter;
    double another_number;
};

int main (void) {
    // what is malloc?
    int *ptr = malloc(sizeof(int));
    *ptr = 3;
    

    // malloc an int

    // malloc a double 

    // malloc a char

    // malloc an array of 10 characters

    // malloc a struct
    struct my_struct *ptr = malloc(sizeof(struct my_struct));
    ptr->num = 3;


    // what does free do?
    free(ptr);

    // how do we free?

    // why do we need to free?


    // what happens if we try to use the data after we've freed?
    printf("%d\n", *ptr);
    
    
    

}
