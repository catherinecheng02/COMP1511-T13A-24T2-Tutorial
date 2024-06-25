// string.c
//
// This program was written by Catherine Cheng (z5310517)
//
// This program demonstrates how to work with strings in C.

#include <stdio.h>


int main(void) {
    // Declare and initialise a string
    //char arr[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char arr2[] = "Hello";
    
    // Looping through string
    int i = 0;
    while (arr2[i] != '\0') {
        printf("%c", arr2[i]);
        i++;
    }


    // Print string
    printf("%s\n", arr2);
    fputs(arr2, stdout);
    
    

    return 0;
}
