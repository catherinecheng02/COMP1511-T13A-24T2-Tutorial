// Intro to pointers
// Written by Catherine Cheng z5310517
#include <stdio.h>
int main(void) {
    int a = 5;
    
    // What is a pointer?
    // variable that stores the address of another variable
    
    // How do you declare a pointer?
    int *p;


    // How do you initialise a pointer? 
    p = &a;// & address of 
    
    // When do we use "*"?
    // declaring pointer
    // dereferencing
    *p = 10;
    

    // How do we print the value that a pointer is pointing at?
    printf("%d\n", *p);

    
    // How do we print the memory address?
    printf("%p\n", p);
    
  
}
